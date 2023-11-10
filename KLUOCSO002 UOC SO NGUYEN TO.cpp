#include"bits/stdc++.h"
#define ll long long
using namespace std;
bool nto(ll n){
	if(n==1){
		return false;
	}
	if(n==2){
		return true;
	}
	if(n%2==0){
		return false;
	}
	ll max = sqrt(n)+1;
	for(int i = 3; i<max; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll dem = 0;
		for(int i = 1; i<=sqrt(n);i++){
			if(n%i==0){
				if(i==n*n){
					if(nto(i)) dem++;
				}else{
					if(nto(i)) dem++;
					if(nto(n/i)) dem++;
				}
			}
		}
		cout << dem << endl;
	}
	return 0;
}
