//#include"bits/stdc++.h"
//#define ll long long
//using namespace std;
//const long long MOD = 1e9+7;
//ll bieu_dien(ll n){
//	ll a[n+1];
//	memset(a,0,sizeof(a));
//	a[0]=1;
//	for(ll k = n; k>= 1; k--){
//		for(ll i = 0; i <= n; i++){
//			if(i > k-1) a[i] = a[i]+a[i-k];
//			a[i]%=MOD;
//		}
//	}
//	return a[n]-1;
//} 
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		ll n; cin >> n;
//		ll ans = bieu_dien(n);
//		cout << ans << endl;
//	}
//	return 0;
//}
#include <iostream>
#include <vector>

const int MOD = 1000000007;

// Function to calculate the number of ways to represent N as the sum of natural numbers
int countWays(int N) {
    std::vector<int> dp(N + 1, 0);
    dp[0] = 1;

    for (int i = 1; i < N; ++i) {
        for (int j = i; j <= N; ++j) {
            dp[j] = (dp[j] + dp[j - i]) % MOD;
        }
    }

    return dp[N];
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int N;
        std::cin >> N;

        int ways = countWays(N);
        std::cout << ways << std::endl;
    }

    return 0;
}

