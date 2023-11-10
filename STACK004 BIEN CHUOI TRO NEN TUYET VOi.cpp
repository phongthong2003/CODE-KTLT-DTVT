#include"bits/stdc++.h"
using namespace std;
string trans(string s){
	stack<char>st;
	for(char c:s){
		if(!st.empty()&&abs(st.top()-c)==32){
			st.pop();
		}else{
			st.push(c);
		}
	}
	string ans = "";
	while(!st.empty()){
		ans = st.top()+ans;
		st.pop();
	}
	return ans;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		cout << trans(s) << endl;
	}
	return 0;
}

