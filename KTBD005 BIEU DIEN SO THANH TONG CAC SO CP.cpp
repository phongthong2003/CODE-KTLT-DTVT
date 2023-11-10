#include"bits/stdc++.h"
using namespace std;
int dem (int n ){
	vector<int>dp(n+1,0);
	dp[0]=1;
	for(int i = 1; i <= sqrt(n); i++){
		for(int j = i*i; j<= n; j++){
			dp[j]=dp[j]+dp[j-i*i];
		}
	}
	return dp[n];
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << dem(n) << endl;
	}
	return 0;
}
