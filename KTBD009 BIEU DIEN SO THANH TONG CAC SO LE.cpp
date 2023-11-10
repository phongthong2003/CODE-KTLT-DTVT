//#include<bits/stdc++.h>
//using namespace std;
//const int MOD = 1e9 + 7;
//#define ll long long 
//#define m 1000000007
//void multiply(ll f[][2],ll g[][2])
//{
//    ll a=(f[0][0]*g[0][0]+f[0][1]*g[1][0])%m;
//    ll b=(f[0][0]*g[0][1]+f[0][1]*g[1][1])%m;
//    ll c=(f[1][0]*g[0][0]+f[1][1]*g[1][0])%m;
//    ll d=(f[1][0]*g[0][1]+f[1][1]*g[1][1])%m;
//    
//    f[0][0]=a;
//    f[0][1]=b;
//    f[1][0]=c;
//    f[1][1]=d;
//}
//void power(ll f[2][2],ll n)
//{
//    ll g[2][2]={{1,1},{1,0}};
//    if(n==0||n==1)
//    return;
//    power(f,n/2);
//    multiply(f,f);
//    
//    if(n%2==1)
//    multiply(f,g);
//}
//ll fib(ll n)
//{
//    ll f[2][2]={{1,1},{1,0}};
//    if(n==0)
//    return 0;
//    power(f,n-1);
//    return f[0][0]%m;
//}
//long long count_way(int N)
//{
//    return fib(N);
//}
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        long long N;
//        cin >> N;
//        cout << count_way(N) << endl;
//    }
//    return 0;
//}
#include"bits/stdc++.h"
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;
ll dem(ll N) {
    vector<ll> dp(N + 1, 0);
    dp[0] = 1;
    for (ll i = 1; i <= N; ++i) {
        for (ll j = 1; j <= i; j += 2) {
            dp[i] = (dp[i] + dp[i - j]) % MOD;
        }
    }
    return dp[N];
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll N;
        cin >> N;
        ll result = dem(N);
        if (result == 0) {
            cout << "-1"<<endl;
        } else {
            cout << result << endl;
        }
    }
    return 0;
}

