#include"bits/stdc++.h"
using namespace std;
#define ll long long
int main(){
	int t;
	cin >> t;
	while(t--){
		ll l,r;
		cin >> l >> r;
		ll sqrt_a = ceil(sqrt(l));
		ll sqrt_b = floor(sqrt(r));
		ll dem = max(0LL,sqrt_b-sqrt_a+1);
		cout << dem << endl;
	}
	return 0;
}
