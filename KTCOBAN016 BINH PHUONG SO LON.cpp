#include"bits/stdc++.h"
using namespace std;
const int N=1000001;
int n,t,k;
char res [2*N];
int main(){
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i < 2*n; i++){
			if(i<=n){
				k+=i;
			}else{
				k+=2*n-i;
			}
			res[2*n-i] = k%10+48;
			k/=10;
		}
		for(int i = 1; i<2*n; i++){
			cout << res[i];
		}
		cout << endl;
	}
	return 0;
}
