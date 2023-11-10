#include"bits/stdc++.h"
using namespace std;
#define ll unsigned long long
ll max_tich (ll n){
	if(n==0){
		return 1;
	}
	if(n<10){
		return n;
	}
	return max(max_tich(n/10)*(n%10),max_tich(n/10-1)*9);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		cout << max_tich(n) << endl;
	}
	return 0;
}
