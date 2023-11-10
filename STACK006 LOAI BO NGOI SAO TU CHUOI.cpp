#include<bits/stdc++.h>
using namespace std;
string clear_star(string s){
	stack<char>st;
	for(char c:s ){
		if(c=='*'&&!st.empty()){
			st.pop();
		}else{
			st.push(c);
		}
	}
	string result ="";
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
		getline(cin,s);
		cout << clear_star(s) << endl;
	}
	return 0;
}
