#include"bits/stdc++.h"
using namespace std;
#define ll long long
int dem_so_0 (ll n){
    int dem = 0;
    while(n>0){
        if((n&1)==0){
            dem++;
        }
        n>>=1;
    }
    return dem;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        int dem = 0;
        for(ll i = 0; i <= n ; i++){
            if(dem_so_0(i)==k){
                dem ++;
            }
        }
        cout << dem << endl;
    }
    return 0;
}