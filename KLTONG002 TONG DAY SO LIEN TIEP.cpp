#include"bits/stdc++.h"
using namespace std;
#define ll long long
int main(){
	int t;
	cin >> t;
	while(t--){
		ll l, r;
		cin >> l >> r;
		ll so = r-l+1;
		ll tong = so*(r+l)/2;
		cout << tong << endl;
	}
	return 0;
}
