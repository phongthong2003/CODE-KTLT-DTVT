#include"bits/stdc++.h"
#define ll long long
using namespace std;
bool check(ll n){
	if(n<=1) return 0;
	if(n<=3) return 1;
	if(n%2==0||n%3==0) return 0;
	for(ll i = 5; i*i<=n; i+=6){
		if(n%i==0||n%(i+2)==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		if(n%2==0){    
			n++;
		}
		for(ll i = n;;i+=2){
			if(check(i)&&check(i-2)){
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}
