#include"bits/stdc++.h"
using namespace std;
#define ll long long
bool check(ll p, ll n){
	ll temp = p, dem = 0, f = 5;
	while(f<= temp){
		dem+=temp/f;
		f*=5;
	}
	return (dem >= n);
}
int print(ll n){
	if(n==1) return 5;
	ll low = 0;
	ll high = 5*n;
	while(low<high){
		ll mid = (low+high)/2;
		if(check(mid,n)) high = mid;
		else low = mid+1;
	}
	return low;
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n;
		cin >> n;
		cout << print(n) << endl;
	}
	return 0;
}
