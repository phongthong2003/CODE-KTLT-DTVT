#include<bits/stdc++.h>
using namespace std;
vector<long long>v;
long long change(long long x, vector<long long >& v){
       long long  n = v.size();
       vector<vector<long long >>dp(n+1,vector<long long >(x+1,0));
       for(long long i=0;i<=n;i++){
           dp[i][0]=1;
       }
       for(long long i=1;i<=n;i++){
           for(long long j=1;j<=x;j++){
               if(j>=v[i-1]){
                  dp[i][j] = dp[i-1][j] + dp[i][j-v[i-1]];
                }
                else dp[i][j]=dp[i-1][j];
           }
       }
       return dp[n][x];
    }
 
int  main(){
	long long t;
	cin>>t;
	while(t--){
		v.clear();
		long long n;
		cin>>n;
		for(long long i=0;pow(2,i)<=n;i++){
			v.push_back(pow(2,i));
		}
		cout<<change(n,v)<<"\n";
	}
  
}