#include <bits/stdc++.h>
using namespace std;

queue<int> findUnion(queue<int> q1, queue<int> q2) {
    unordered_map<int, int> m;
    while (!q1.empty()) {
        m[q1.front()]++;
        q1.pop();
    }
    while (!q2.empty()) {
        m[q2.front()]++;
        q2.pop();
    }
    queue<int> q;
    for (auto i : m) {
        q.push(i.first);
    }
    return q;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        queue<int> q1, q2;
        string s1, s2;
        cin >> s1 >> s2;
        stringstream ss1(s1), ss2(s2);
        string token;
        while (getline(ss1, token, ',')) {
            q1.push(stoi(token));
        }
        while (getline(ss2, token, ',')) {
            q2.push(stoi(token));
        }
        queue<int> q = findUnion(q1, q2);
        vector<int> result;
        while (!q.empty()) {
            result.push_back(q.front());
            q.pop();
        }
        reverse(result.begin(), result.end());
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i];
            if (i < result.size() - 1) cout << ",";
        }
        cout << endl;
    }
    return 0;
}
