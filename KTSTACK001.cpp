#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stack<char>st;
        bool balance = true;
        for(char x:s){
            if(x=='('||x=='{'||x=='['){
                st.push(x);
            }else{
                if(st.empty()||x=='('&&st.top()!='('||x=='['&&st.top()!='['||x=='{'&&st.top()!='{'){
                    balance = false;
                    break;
                }
                st.pop();
            }
        }
        if(balance && st.empty()){
            cout <<"YES"<<endl;
        }else{
            cout <<"NO"<<endl;
        }
    }
    return 0;
}