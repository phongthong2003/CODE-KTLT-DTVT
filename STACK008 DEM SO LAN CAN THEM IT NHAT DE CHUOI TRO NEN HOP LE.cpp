#include"bits/stdc++.h"
using namespace std;
int add(string s){
	int dem = 0;
	stack<char>st;
	for(char c:s){
		if(c=='('){
			st.push(c);
		}else if(c==')'&&!st.empty()){
			st.pop();
		}else{
			dem++;
		}
	}
	return dem + st.size();
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << add(s) << endl;
	}
	return 0;
}
