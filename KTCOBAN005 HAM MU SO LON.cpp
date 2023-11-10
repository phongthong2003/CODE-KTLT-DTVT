#include"bits/stdc++.h"
#define ll long long
using namespace std;
const ll mod = 1e9+7;
ll power(ll a, ll b , ll m){
	if(b==0){
		return 1;
	}
	if(b%2==0){
		ll half = power(a,b/2,m)%m;
		return (half*half)%m;
	}else{
		return(a%m*power(a,b-1,m))%m;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll a,b;
		cin >> a >> b;
		ll ans = power(a%mod,b%(mod-1),mod);
		cout << ans << endl;
	}
	return 0;
}
