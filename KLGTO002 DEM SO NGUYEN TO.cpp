#include<bits/stdc++.h>
using namespace std;
bool snt(int n){
	if(n <= 1){
		return false;
	}
	if(n <= 2){
		return true;
	}
	if(n%2==0){
		return false;
	}
	int max = sqrt(n)+1;
	for(int i = 3; i < max; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int dem (int l, int r){
	int dem = 0;
	for(int i = l; i<=r; i++){
		if(snt(i)){
			dem++;
		}
	}
	return dem;
}
int main(){
	for(int i=2;i<=1000000;i++){
		if(snt(i)){
			cout<<i<<" "; 
		} 
	} 
	/*
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		cout << dem(a,b) << endl;
	} 
	return 0;
	*/
}
