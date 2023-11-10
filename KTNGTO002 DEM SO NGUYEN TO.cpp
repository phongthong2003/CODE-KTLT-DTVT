#include"bits/stdc++.h"
using namespace std;
const int maximum = 1e6;
int a[maximum+1];
void sinh(){
	for(int i = 0; i<=maximum; i++){
		a[i]=1;
	}
	a[0]=a[1]=0;
	for(int i = 2; i*i<=maximum; i++){
		if(a[i]){
			for(int j = i*i; j<=maximum; j+=i){
				a[j]= 0;
			}
		}
	}
}
int main(){
	sinh();
	int t;
	cin >> t;
	while(t--){
		int l,r;
		cin >> l >> r;
		int dem = 0;
		for(int i = l; i<=r; i++){
			if(a[i]==1){
				dem++;
			}
		}
		cout << dem << endl;
	}
	return 0;
}
