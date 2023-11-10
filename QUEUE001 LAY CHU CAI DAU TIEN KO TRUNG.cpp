#include"bits/stdc++.h"
using namespace std;
int firstchar(string s){
	unordered_map<char,int>mp;
	for(char x:s){
		mp[x]++;
	}
	for(int i = 0; i<s.length();i++){
		if(mp[s[i]]==1){
			return i;
		}
	}
	return -1;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		cout << firstchar(s) << endl;
	}
	return 0;
}
