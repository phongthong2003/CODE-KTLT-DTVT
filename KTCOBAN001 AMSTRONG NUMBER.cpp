#include"bits/stdc++.h"
using namespace std;
bool ams(long long n){
	string s = to_string(n);
	long long sum = 0;
	long long length = s.size();
	for(char c : s){
		sum+=pow(c-'0', length);
	}
	if(sum == n){
		return 1;
	}
	return 0;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n; cin >> n;
		if(ams(n)){
			cout <<"1"<<endl;
		}else{
			cout <<"0"<<endl;
		}
	}
	return 0;
}
