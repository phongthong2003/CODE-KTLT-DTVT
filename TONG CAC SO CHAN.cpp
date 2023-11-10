#include<bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
long long phan_tich_2(long long n, long long i){
    long long result = 1;
    while(n>0){
        if(n%2==1){
           result = (result*i)%MOD;
        }
        i = (i*i) % MOD;
        n/=2;
    }
    return result%MOD;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        if (n%2!=0){
            cout <<"-1"<<endl;
        }else{
            n=n/2 -1;
            long long result = phan_tich_2(2,n);
            cout << result << endl;
        }
    }
    return 0;
}