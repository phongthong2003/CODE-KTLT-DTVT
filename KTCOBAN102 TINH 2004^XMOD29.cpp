#include"bits/stdc++.h"
using namespace std;
#define ll long long
#define MOD 29
const ll mod = 29;
ll tinh (ll x, ll p){
	x=x%MOD;
	p=p%(MOD-1);
	if(p==0){
		return 0;
	}
	else{
		ll tong = 1;
		for(int i = 0; i< p; i++){
			tong = (tong*x)%MOD;
		}
		tong-=1;
		while(tong%(x-1)!=0){
			tong+=MOD;
		}
		return tong/(x-1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll x;
		cin >> x;
		ll ans;
		ans=(tinh(2,2*x+1))%mod;
		ans=(ans*tinh(3,x+1))%mod;
		ans=(ans*tinh(167,x+1))%mod;
		cout<<ans<<"\n";
	}
	return 0;
}
