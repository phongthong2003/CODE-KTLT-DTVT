#include<bits/stdc++.h>
using namespace std;

string countOfAtoms(string formula) {
    int n = formula.size();
    map<string, int> counts;
    stack<map<string, int>> stk;
    stk.push(counts);

    for (int i = 0; i < n;) {
        if (formula[i] == '(') {
            stk.push(map<string, int>());
            i++;
        } else if (formula[i] == ')') {
            map<string, int> temp = stk.top();
            stk.pop();
            int i_start = ++i, multiplicity = 1;
            while (i < n && isdigit(formula[i])) i++;
            if (i > i_start) multiplicity = stoi(formula.substr(i_start, i - i_start));
            for (auto &p : temp) stk.top()[p.first] += p.second * multiplicity;
        } else {
            int i_start = i++;
            while (i < n && islower(formula[i])) i++;
            string name = formula.substr(i_start, i - i_start);
            i_start = i;
            while (i < n && isdigit(formula[i])) i++;
            int multiplicity = i > i_start ? stoi(formula.substr(i_start, i - i_start)) : 1;
            stk.top()[name] += multiplicity;
        }
    }

    map<string, int> ans = stk.top();
    string output = "";
    for (auto &p : ans) {
        output += p.first;
        if (p.second > 1) output += to_string(p.second);
    }
    return output;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string formula;
        cin >> formula;
        cout << countOfAtoms(formula) << endl;
    }
    return 0;
}
