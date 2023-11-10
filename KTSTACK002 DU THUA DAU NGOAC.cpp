#include<bits/stdc++.h>
using namespace std;

bool check(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            if (!st.empty() && st.top() == '(') return true;
            st.push(s[i]);
        }
        else if (s[i] == ')') {
            if (st.empty()) return true;
            if (st.top() == '(') st.pop();
        }
    }
    return !st.empty();
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        if (check(s)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}

