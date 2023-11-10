#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll uoc (ll n){
	int s = 1;
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i==0){
			if(i!=n/i){
				s+=i+n/i;
			}else{
				s+=i;
			}
		}
	}
	return s;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		cout << uoc(n) << endl;
	}
	return 0;
}
