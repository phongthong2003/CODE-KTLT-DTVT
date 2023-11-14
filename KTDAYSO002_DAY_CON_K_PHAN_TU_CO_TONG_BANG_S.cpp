#include "bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k,s;
        cin >> n >> k >> s;
        vector<int>a(n);
        for(int i =0; i< n; i++){
            cin >> a[i];
        }
        vector<vector<int>>dp(k+1,vector<int>(s+1,0));// khai bao ma tran co k+1 dong va s+1 cot
        dp[0][0]=1; //neu chon 0 phan tu co tong = 0 thi chi co 1 cach chon
        for(int i = 0; i < n; i++){
            for(int j = k; j > 0; j--){
                for(int l = s; l>=a[i]; l--){
                    dp[j][l]+=dp[j-1][l-a[i]];
                }
            }
        }
        cout << dp[k][s] << endl;
    }
    return 0;
}