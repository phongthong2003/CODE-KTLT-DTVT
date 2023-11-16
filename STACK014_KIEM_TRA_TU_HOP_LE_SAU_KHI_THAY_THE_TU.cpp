#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    stack<char>st;
    for(char c:s){
        if(c=='a'){
            st.push('b');
        }else if(c=='b'){
            st.push('c');
        }else if(c=='c'){
            if(st.empty() || st.top()!='c'){
                return false;
            }
            st.pop();
            if(st.empty() || st.top()!='b'){
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        if(check(s)==true){
            cout <<"1"<<endl;
        }else{
            cout <<"0"<<endl;
        }
    }
    return 0;
}
