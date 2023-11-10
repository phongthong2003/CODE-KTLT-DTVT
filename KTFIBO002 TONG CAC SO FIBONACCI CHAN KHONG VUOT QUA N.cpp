#include"bits/stdc++.h"
#define ll long long
using namespace std;
const int mod = 1e6;
ll a[mod];
void fibo(){
	a[0]=a[1]=0;
	ll a1 = 0, a2 = 1;
	ll i = 2;
	ll A;
	while(i<=mod){
		A= a1+a2;
		a1= a2;
		a2 = A;
		a[i]=A;
		i++;
	}
}
int main(){
	int t;
	cin >> t;
	fibo();
	while(t--){
		ll n;
		cin >> n;
		ll tong = 0, i=2;
		while(a[i]<=n){
			if(a[i]%2==0){
				tong+=a[i];
			}
			i++;
		}
		cout << tong << endl;
	}
	return 0;
}
