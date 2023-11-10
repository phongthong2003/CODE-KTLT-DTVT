#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        int k;
        cin >> s >> k;
        queue<string> q;
        string temp = "";
        for(int i = 0; i < s.length(); i++) {
            if(s[i] != ',') {
                temp += s[i];
            } else {
                q.push(temp);
                temp = "";
            }
        }
        q.push(temp);
        stack<string> stk;
        for(int i = 0; i < k; i++) {
            stk.push(q.front());
            q.pop();
        }
        while(!stk.empty()) {
            cout << stk.top();
            stk.pop();
            if(!stk.empty() || q.size() > 0) {
                cout << ",";
            }
        }
        while(!q.empty()) {
            cout << q.front();
            q.pop();
            if(q.size() > 0) {
                cout << ",";
            }
        }
        cout << endl;
    }
    return 0;
}
