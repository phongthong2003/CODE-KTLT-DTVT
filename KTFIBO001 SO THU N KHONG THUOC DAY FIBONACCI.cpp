#include"bits/stdc++.h"
using namespace std;
#define ll long long
ll non_fibo(ll n){
	ll a1 = 1, a2 = 2, a3 = 3;
	while(n>0){
		a1 = a2;
		a2 = a3;
		a3 = a1+a2;
		n = n-(a3-a2-1);
	}
	n = n+(a3-a2-1);
	return a2+n;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		cout << non_fibo(n)<< endl;
	}
	return 0;
}
