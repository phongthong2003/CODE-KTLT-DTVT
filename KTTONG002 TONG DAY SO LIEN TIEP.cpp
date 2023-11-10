#include"bits/stdc++.h"
using namespace std;
#define ll long long
int main(){
	int t;
	cin >> t;
	while(t--){
		int l,r;
		cin >> l >> r;
		ll so = r-l+1;
		ll result = so*(l+r)/2;
		cout << result <<endl; 
	}
	return 0;
}
