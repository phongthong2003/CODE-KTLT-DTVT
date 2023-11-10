#include"bits/stdc++.h"
using namespace std;
#define ll long long
int solve(ll n){
	if(n<=2){
		return 0;
	}else{
		for(int i = 2; i<=sqrt(n);i++){
			if(n%i==0){
				int d = 0;
				while(n%i==0){
					d++;
					n/=i;
				}
				if(d > 1){
					return 1;
				}
			}
		}
		return 0;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		if(solve(n)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
