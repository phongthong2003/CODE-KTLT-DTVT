#include"bits/stdc++.h"
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<char>st;
		for(char c:s){
			if(!st.empty()&&((st.top()=='A'&&c=='B')||(st.top()=='C'&&c=='D'))){
				st.pop();
			}else{
				st.push(c);
			}
		}
		cout << st.size() << endl;
	}
	return 0;
}
