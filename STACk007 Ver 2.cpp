#include"bits/stdc++.h"
using namespace std;
string trans(string s){
	stack<char>st;
	for(char c:s){
		if(!st.empty()&&(st.top()==c)){
			st.pop();
		}else{
			st.push(c);
		}
	}
	string result ="";
	while(!st.empty()){
		result = st.top() + result;
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
		cout << trans(s) << endl;
	}
	return 0;
}
