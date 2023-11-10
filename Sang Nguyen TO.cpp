#include"bits/stdc++.h"
using namespace std;
int prime[1000001];
void sang(){
	for(int i = 0; i<=1000; i++){
		prime[i] = 1; // cho tat ca deu la snt
	}
	prime [0] = prime[1] = 0; // loai 0 va 1
	for(int i = 2; i<=1000; i++){
		if(prime[i]){
			for(int j = i*i; j<1000000;j+=i){
				prime[j] = 0;
			}
		}
	}
}
int main(){
	sang();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 0; i<= n; i++){
			if(prime[i]==1){
				cout << i <<" ";
			}
		}
		cout << endl;
	}
	return 0;
}
