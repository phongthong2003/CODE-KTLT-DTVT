//#include"bits/stdc++.h"
//using namespace std;
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		long long n;
//		cin >> n;
//		long long uoc = 0;
//		for(int i = 1; i<= n/2; i++){
//			if(n%i==0){
//				uoc+=i;
//			}
//		}
//		if(uoc == n){
//			cout <<"1"<<endl;
//		}else{
//			cout <<"0"<<endl;
//		}
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll tong_uoc(ll n){
	ll sum=1;
	ll temp=n;
	for(int i=2;i*i<=n;i++){
		if(n%i==0)
		{    int d=0;
			while(n%i==0){
				d++;
				n/=i;
			}
			sum=sum*((pow(i,d+1)-1)/(i-1));
		}
	}
	if(n!=1){
		sum*=(n+1);
	}
	return sum==temp*2;
}
int main(){
     int t;
     cin>>t;
     while(t--){
     ll n;
     cin>>n;
     if(tong_uoc(n)){
     	cout<<1<<"\n";
	 }
	 else{
	 	cout<<0<<"\n";
	 }
    

	 }

   return 0;
}
