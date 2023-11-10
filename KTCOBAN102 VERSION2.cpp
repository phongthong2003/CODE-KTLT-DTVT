#include<bits/stdc++.h>
using namespace std;
#define mod 29 
#define ll long long
int tinh(int x,int p){
	x=x%mod;
	p=p%(mod-1);//dinh ly fermat nho 
	if(p==0){
		return 0;
	}
	else{
		int t=1;
		for(int i=0;i<p;i++){
			t=(t*x)%mod;
		}
		t=t-1;
		while(t%(x-1)!=0){
			t+=mod;
		}
		return t/(x-1);
	}
}
int main(){
	long long x;
	while(cin >> x){
		ll ans;
		ans=(tinh(2,2*x+1))%mod;
		ans=(ans*tinh(3,x+1))%mod;
		ans=(ans*tinh(167,x+1))%mod;
		cout<<ans<<"\n";
	}
	return 0;
}
