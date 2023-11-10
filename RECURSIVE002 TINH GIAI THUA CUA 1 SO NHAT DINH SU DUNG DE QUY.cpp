#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll factorial(ll n){
	if(n<=1){
		return 1;
	}
	return n*factorial(n-1);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		cout << factorial(n) << endl;
	}
	return 0;
}
