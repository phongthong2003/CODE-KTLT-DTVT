#include"bits/stdc++.h"
using namespace std;
#define ll long long
ll perfect_num(ll n){
	ll sum = 1;
	for(ll i = 2; i*i<=n;i++){
		if(n%i==0){
			sum+=i;
		}
		if(i!=n/i){
			sum+=n/i;
		}
	}
	return sum;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n ;
		if(perfect_num(n)==n){
			cout <<"1" <<endl;
		}else{
			cout <<"0"<<endl;
		}
	}
	return 0;
}
