#include"bits/stdc++.h"
using namespace std;
string remove(string s){
	string temp = "";
	int i = 0;
	while(i < s.length()){
		if(temp.empty()||s[i]!=temp.back()){
			temp.push_back(s[i]);
		}else{
			temp.pop_back();
		}
		i++;
	}
	return temp;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		cout << remove (s) << endl;
	}
	return 0;
}
