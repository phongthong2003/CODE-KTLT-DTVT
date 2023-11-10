#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sumsnt(ll n){
    ll a[n+1];
    ll sum = 0;
    memset(a,0,sizeof(a));
    ll max = n/2;
    for(int i = 2; i<= max ; i++){
        if(a[i]==0){
            for(int j = i*2; j<=n;j+=i){
                a[j]=i;
            }
        }
    }
    for(ll i = 2; i <= n; i++){
        if(a[i]){
            sum+=a[i];
        }else{
            sum+=i;
        }
    }
    return sum;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << sumsnt(n) << endl;
    }
    return 0;
}
