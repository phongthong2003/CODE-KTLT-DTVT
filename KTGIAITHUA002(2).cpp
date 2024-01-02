#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll count(ll n){
	ll cnt=0;
	for(ll i=5;i<=n;i*=5){
		cnt+=n/i;
	}
	return cnt;
}
ll solve(ll n){
	ll l=0, r=n*5;
	while(l<r){
		ll m=(l+r)/2;
		ll z=count(m);
		if(z<n) l=m+1;
		else r=m;
	} 
	return l;
}
main(){
	int t;cin>>t;
	while(t--){
		ll n;cin>>n;
		cout<<solve(n)<<endl;
	}
}
