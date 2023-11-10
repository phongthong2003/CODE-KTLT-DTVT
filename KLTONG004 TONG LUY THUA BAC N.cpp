#include"bits/stdc++.h"
using namespace std;
int tlt (int m, int n,int tong=0, int num=1){
	int result = 0;
	int mux = pow(num,n);
	while(mux+tong<m){
		result += tlt(m,n,tong+mux,num+1);
		num ++;
		mux = pow(num,n);
	}
	if(mux+tong==m){
		result ++;
	}
	return result;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int m,n;
		cin >> m >> n;
		cout << tlt(m,n) << endl;
	}
	return 0;
}
