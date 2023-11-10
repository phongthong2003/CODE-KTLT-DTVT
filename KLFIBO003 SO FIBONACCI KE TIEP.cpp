#include"bits/stdc++.h"
#define ll long long
using namespace std;
bool fibo(ll n){
	ll a = 0,b = 1;
	while(b < n){
		ll temp = b;
		b = a+b;
		a = temp;
	}
	return b == n;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll sl = n+1;
		while(true){
			if(!fibo(sl)){
				cout << sl << endl;
				break;
			}
			sl++;
		}
	}
	return 0;
}

