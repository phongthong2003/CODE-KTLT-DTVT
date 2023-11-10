#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check(ll p,ll n){
	ll temp=p,dem=0,f=5;
	while(f<=temp){
		dem+=temp/f;
		f*=5;
	}
	return (dem>=n);
}
ll find(ll n){
	if(n==1) return 5;
	ll l=0;
	ll h=5*n;
	while(l<h){
		ll mid=(l+h)/2;
		if(check(mid,n))h=mid;
		else l=mid+1;
	}
	return l;
}
int main(){
     int t;
     cin>>t;
     while(t--){
     ll n;
     cin>>n;
     cout<<find(n)<<endl;
	 }

   return 0;
}
