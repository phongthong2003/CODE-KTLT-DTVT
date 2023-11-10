#include"bits/stdc++.h"
using namespace std;
long long tong_uoc(long long n){
	long long tong = 1;
	for(int i = 2 ; i <= sqrt(n);i++){
		if(n%i==0){
			if(i!=n/i){
				tong+=i+n/i;
			}else{
				tong+=i;
			}
		}
	}
	return tong;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long a;
		cin >> a;
		cout << tong_uoc(a) << endl;
	}
	return 0;
}
