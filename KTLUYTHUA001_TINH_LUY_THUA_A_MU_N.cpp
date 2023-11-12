#include <iostream>
#include <cmath>
using namespace std;
string multiply(string a, string b) {
    int len1 = a.length();
    int len2 = b.length();
    int len = len1 + len2;
    int result[len] = {0};
    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int mul = (a[i] - '0') * (b[j] - '0');
            int sum = mul + result[i + j + 1];
            result[i + j] += sum / 10;
            result[i + j + 1] = sum % 10;
        }
    }
    string multiplied = "";
    for (int i = 0; i < len; i++) {
        if (!(multiplied.empty() && result[i] == 0)) {
            multiplied += (result[i] + '0');
        }
    }
    return multiplied.empty() ? "0" : multiplied;
}
string power(int a, int n) {
    if (n == 0) {
        return "1";
    }
    string temp = power(a, n / 2);
    if (n % 2 == 0) {
        return multiply(temp, temp);
    } else {
        return multiply(to_string(a), multiply(temp, temp));
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, n;
        cin >> a >> n;
        string result = power(a, n);
        cout << result << endl;
    }
    return 0;
}
