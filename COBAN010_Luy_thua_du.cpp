#include"bits/stdc++.h"
using namespace std;
#define ll long long
ll mod = 1e9+7;
ll chia(ll a, ll n){
	if(n==0){
		return 1;
	}
	ll res = pow(a, n/2);
	if(n%2==0){
		return (((res%mod)*(res%mod))%mod);
	}
	else{
		return (((res%mod)*(res%mod))%mod*a%mod)%mod;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll a,n;
		cin >> a >> n;
		cout << chia(a,n) << endl;
	}
	return 0;
}
