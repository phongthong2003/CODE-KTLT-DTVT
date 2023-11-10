#include"bits/stdc++.h"
using namespace std;
#define ll long long
ll dem (ll k, ll s){
	ll count = 0;
	for(ll x = 0; x<= k ; ++x){
		for(ll y = 0; y<=k; ++y){
			ll z = s - x - y;
			if(z>=0 && z<=k){
				count ++;
			}
		}
	}
	return count;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll k,s;
		cin >> k >> s;
		cout << dem(k,s) << endl;
	}
	return 0;
}
