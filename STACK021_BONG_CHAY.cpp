#include<bits/stdc++.h>
using namespace std;

int calPoints(vector<string>& ops) {
    stack<int> st;
    for (string op : ops) {
        if (op == "+") {
            int top = st.top(); st.pop();
            int newtop = top + st.top();
            st.push(top);
            st.push(newtop);
        } else if (op == "C") {
            st.pop();
        } else if (op == "D") {
            st.push(2 * st.top());
        } else {
            st.push(stoi(op));
        }
    }

    int ans = 0;
    for (; !st.empty(); st.pop())
        ans += st.top();
    return ans;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string str;
        getline(cin, str);
        stringstream ss(str);
        vector<string> ops;
        string token;
        while(getline(ss, token, ',')) {
            ops.push_back(token); 
        }
        cout << calPoints(ops) << endl;
    }
    return 0;
}
