#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll power(ll a,ll b){
  if(b==0) return 1;
  ll res=power(a,b/2);
  if(b%2==0){
    return ((res%mod)*(res%mod))%mod;
  }
  else{
    return (((res%mod)*(res%mod))%mod*a%mod)%mod;
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    if(n%2==1){
      cout<<-1<<"\n";
    }
    else{
      n=n/2-1;
      cout<<power(2,n)<<"\n";
    }
  }
}
