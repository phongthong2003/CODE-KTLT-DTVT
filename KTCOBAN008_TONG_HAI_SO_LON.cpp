#include<bits/stdc++.h>
using namespace std;

string add(string a, string b) {
    while (a.size() < b.size()) a = '0' + a;
    while (b.size() < a.size()) b = '0' + b;
    string res = "";
    int carry = 0;
    for (int i = a.size() - 1; i >= 0; i--) {
        int tmp = a[i] - '0' + b[i] - '0' + carry;
        carry = tmp / 10;
        tmp %= 10;
        res = (char)(tmp + '0') + res;
    }
    if (carry > 0) res = '1' + res;
    return res;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string a,b;
        cin >> a >> b;
        cout << add(a,b) << endl;
    }
    return 0;
}
