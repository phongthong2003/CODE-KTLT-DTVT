#include"bits/stdc++.h"
using namespace std;
int a[10000];
void nhap(int a[], int k){
	for(int i = 1; i<= k; i++){
		a[i] = i;
	}
}
void xuat(int a[], int k){
	for(int i = 1; i <= k ; i++){
		cout << a[i];
		if(i < k){
			cout <<" ";
		}
	}
	cout << endl;
}
void print_next(int a[], int k){
	do{
		xuat(a,k);
	}while(next_permutation(a+1,a+k+1));
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int k; cin >> k;
		nhap(a,k);
		print_next(a,k);
	}
	return 0;
}
