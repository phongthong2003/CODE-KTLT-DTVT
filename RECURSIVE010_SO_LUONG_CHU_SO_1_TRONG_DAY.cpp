#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dem_1 (ll n){
    ll count = 0;
    for(ll i = 1; i<=n; i*=10){ // làm như này để nó quét hàng chục trăm nghìn đơn vị
        ll chia = i*10;
        count+=(n/chia)*i+(min(max(n%chia-i+1,0LL),i));
    }
    return count;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << dem_1(n) << endl;
    }
    return 0;
}