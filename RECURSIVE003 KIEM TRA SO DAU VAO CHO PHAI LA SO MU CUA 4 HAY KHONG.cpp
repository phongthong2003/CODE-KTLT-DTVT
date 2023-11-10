#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool check(ll n){
	if(n==1){
		return 1;
	}
	if(n<4){
		return 0;
	}
	return check(n/4) && (n%4==0);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		cout << check(n) << endl; 
	}
	return 0;
}
