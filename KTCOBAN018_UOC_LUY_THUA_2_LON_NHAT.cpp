#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// ll mu(ll n){
//     ll ans = 0;
//     while(ans){
//         ans >>= 1;
//         ans+=n;
//     }
//     return ans;
// }
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         ll n;
//         cin >> n;
//         cout << mu(n) << endl;
//     }
//     return 0;
// }
ll dem( ll n){
    ll dem = 0;
    for(ll i = 2; i<= n; i*=2){
        dem+=n/i;
    }
    return dem;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << dem(n) << endl;
    }
    return 0;
}