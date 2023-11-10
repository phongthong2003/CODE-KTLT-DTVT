#include"bits/stdc++.h"
using namespace std;
#define ll long long
ll ans(ll n){
	if(n==0){
		return 0;
	}
	if(n < 10 ){
		return n;
	}
	return (max(ans(n/10)*(n%10),ans(n/10-1)*9));
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		cout << ans(n) << endl;
	}
	return 0;
}
