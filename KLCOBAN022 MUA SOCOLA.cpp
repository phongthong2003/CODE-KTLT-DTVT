#include"bits/stdc++.h"
using namespace std;
#define ll long long
ll scl(ll x, ll y, ll m){
	if(m < x){
		return 0;
	}
	ll so_scl = m/x;
	so_scl = so_scl + (so_scl-1)/(y-1);
	return so_scl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll x ,y,m;
		cin >> x >> y >> m;
		cout << scl(x,y,m) << endl;
	}
	return 0;
}
