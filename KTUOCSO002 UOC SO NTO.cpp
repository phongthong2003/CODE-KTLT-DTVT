#include"bits/stdc++.h"
using namespace std;
#define ll long long
bool snt(ll n){
	if(n<=1){
		return 0;
	}
	if(n<=3){
		return 1;
	}
	if(n%2==0||n%3==0){
		return 0;
	}
	for(int i = 5; i*i <= n; i+= 6){
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
		ll dem = 0;
		for(int i = 1; i*i<= n; i++){
			if(n%i==0){
				if(i*i==n){
					if(snt(i)) dem++;
				}else{
					if(snt(i)) dem++;
					if(snt(n/i)) dem++;
				}
			}
		}
		cout << dem << endl;
	}
	return 0;
}
