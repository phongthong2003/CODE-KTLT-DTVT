#include<bits/stdc++.h>
using namespace std;
string dao(string s){
    stack<char>st;
    string result ="";
    for(char c:s){
        if(c=='('){
            st.push(c);
        }else if(c==')'){
            string temp ="";
            while(!st.empty()&&st.top()!='('){
                temp += st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
            for(char ch : temp){
                st.push(ch);
            }
        }else{
            st.push(c);
        }
    }
    while(!st.empty()){
        result = st.top()+result;
        st.pop();
    }
    return result;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        cout << dao(s) << endl;
    }
    return 0;
}