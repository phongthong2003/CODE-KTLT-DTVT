#include <iostream>
#include <string>
#include <stack>

using namespace std;

string removeKdigits(string num, int k) {
    stack<char> s;

    for (char digit : num) {
        while (!s.empty() && k > 0 && s.top() > digit) {
            s.pop();
            k--;
        }
        if (!s.empty() || digit != '0') {
            s.push(digit);
        }
    }

    while (!s.empty() && k > 0) {
        s.pop();
        k--;
    }

    string result = "";
    while (!s.empty()) {
        result = s.top() + result;
        s.pop();
    }

    return result.empty() ? "0" : result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string num;
        int k;
        cin >> num >> k;

        string result = removeKdigits(num, k);
        cout << result << endl;
    }

    return 0;
}
