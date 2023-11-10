#include"bits/stdc++.h"
using namespace std;
#define ll long long
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		k=k-1;
		n=n+k;
		ll ans = 1;
		ll c = min(k,n-k);
		for(ll i = 1; i<=c; i++,n--){
			ans=ans*n/i;
		}
		cout << ans << endl;
	}
	return 0;
}
