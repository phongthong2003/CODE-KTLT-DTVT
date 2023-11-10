#include"bits/stdc++.h"
using namespace std;
const long long MOD  = 1e9+7;
#define ll long long
ll dem (ll n){
	vector<ll>dp(n+1,0);
	dp[0]=1;
	for(ll i = 1; i< n; i++){
		for(ll j = i; j<=n; j++){
			dp[j]=(dp[j]+dp[j-i])%MOD;
		}
	}
	return dp[n];
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		cout << dem(n) << endl;
	}
	return 0;
}
