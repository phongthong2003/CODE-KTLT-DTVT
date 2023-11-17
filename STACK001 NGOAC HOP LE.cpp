#include <iostream>
#include <stack>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s); 
        stack<char> st;
        bool isBalanced = true;

        for (char x : s) {
            if (x == '(' || x == '[' || x == '{') {
                st.push(x);
            } else {
                if (st.empty() || 
                    (x == ')' && st.top() != '(') ||
                    (x == ']' && st.top() != '[') ||
                    (x == '}' && st.top() != '{')) {
                    isBalanced = false;
                    break;
                }
                st.pop();
            }
        }

        if (isBalanced && st.empty()) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }
    return 0;
}
