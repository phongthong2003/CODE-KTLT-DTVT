#include<bits/stdc++.h>
using namespace std;

queue<int> clear_characters(string s){
    stringstream ss (s);
    queue<int> q;
    int n;
    while(ss >> n){
        q.push(n);
        if(ss.peek() == ','){
            ss.ignore();
        }
    }
    return q;
}

bool check(queue<int> q1, queue<int> q2){
    if(q1.size() != q2.size()){
        return 0;
    }
    while(!q1.empty()){
        if(q1.front() != q2.front()){
            return 0;
        }
        q1.pop();
        q2.pop();
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        queue<int> q1 = clear_characters(s1);
        queue<int> q2 = clear_characters(s2);
        cout << check(q1, q2) << endl;
    }
    return 0;
}
