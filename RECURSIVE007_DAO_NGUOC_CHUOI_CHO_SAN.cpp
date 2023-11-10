#include<bits/stdc++.h>
using namespace std;
void opposite(string& s,int left, int right){
	if(left>=right){
		return;
	}
	swap(s[left],s[right]);
	opposite(s,left+1,right-1);
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		opposite(s,0,s.size()-1);
		cout <<s << endl;
	}
	return 0;
}
