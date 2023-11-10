#include"bits/stdc++.h"
#define ll long long
using namespace std;
string trans(long long n){
	if(n==0){
		return "0";
	}
	string so_nhi_phan="";
	while(n>0){
		so_nhi_phan = to_string(n%2)+so_nhi_phan;
		n/=2;
	}
	return so_nhi_phan;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n; cin >> n;
		cout << trans(n) << endl;
	}
	return 0;
}
