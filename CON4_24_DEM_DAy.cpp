#include"bits/stdc++.h"
using namespace std;
#define ll long long
const ll mod = 123456789;
ll dp[1000005];
void solve(){
    dp[0]=1;
    for(int i = 1; i <= 1000000;i++){
        dp[i] = (dp[i-1]*2)%mod;
    }
}
int main(){
    int t;
    cin >> t;
    solve();
    while(t--){
        int n;
        cin >> n;
        cout << dp[n-1] << endl;
    }
    return 0;
}