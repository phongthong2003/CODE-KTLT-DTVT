#include"bits/stdc++.h"
using namespace std;

int main(){
	int t;
	cin >> t; 
	while(t--){
		string s;
		cin >> s;
		if(s[0]=='-'){
			s.erase(0,1);
		}
		cout << s.size() << endl;
	}
	return 0;
}
