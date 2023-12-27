#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll modul(string a,ll b){
	ll ans=0;
	for(char c:a){
		ans=(ans*10+c-'0')%b;
	}
	return ans;
}
ll power(ll a,ll b){
	if(b==0) return 1;
   ll res=power(a,b/2);
	if(b%2==0){
		return ((res%mod)*(res%mod))%mod;
	}
	else{
		return (((res%mod)*(res%mod))%mod*(a%mod))%mod;
	}
}
int main(){
     int t;
     cin>>t;
     while(t--){
    string a,b;
    cin>>a>>b;
    ll x=modul(a,mod);
    ll y=modul(b,mod-1);
    cout<<power(x,y)<<"\n";

	 }

   return 0;
}
