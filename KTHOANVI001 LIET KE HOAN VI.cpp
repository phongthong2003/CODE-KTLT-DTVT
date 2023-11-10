#include"bits/stdc++.h"
using namespace std;
#define ll long long;
int a[1000];
void nhap(int a[], int n){
	for(int i = 1; i <= n ; i++){
		a[i] = i;
	}
}
void in(int a[], int n){
	for(int i = 1; i<= n; i++){
		cout << a[i];
		if(i < n){
			cout <<" ";
		}
	}
	cout << endl;
}
void liet_ke_hv( int a[], int n){
	do{
		in(a,n);
	}while(next_permutation(a+1,a+n+1));
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		int n;
		cin >> n;
		nhap(a,n);
		liet_ke_hv(a,n);
	}
	return 0;
}
