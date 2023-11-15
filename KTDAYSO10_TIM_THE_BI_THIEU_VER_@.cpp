#include<bits/stdc++.h>
#define ll unsigned long long 
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a,l;
        cin >> n >> l;
        ll sum = 0;
        ll cuoi = l+n-1;
        for(int i = 0; i< n-1 ; i++){
            cin >> a;
            sum+=a;
        }
        ll ans = n*(l+cuoi)/2;
        ans-=sum;
        cout << ans << endl;
    }
    return 0;
}