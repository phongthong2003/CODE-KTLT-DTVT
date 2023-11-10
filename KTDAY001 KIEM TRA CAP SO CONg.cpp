//#include"bits/stdc++.h"
//using namespace std;
//
//bool csc(int a[],int n){
//	if(n<=2){
//		return true;
//	}
//	sort(a,a+n);
//	int d = a[1]-a[0];
//	for(int i = 1; i < n ; i++){
//		if(a[i]-a[i-1]!=d){
//			return false;
//		}
//	}
//	return true;
//}
//int main(){
//	int n;
//	cin >> n;
//	int a[n];
//	for(int i = 0; i < n ; i++){
//		cin >> a[i];
//	}
//	if(csc(a,n)){
//		cout<<"YES";
//	}else{
//		cout <<"NO";
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll check(ll a[],ll n){
	ll d=a[1]-a[0];
	int ok=0;
	for(int i=1;i<n-1;i++){
		if((a[i+1]-a[i])!=d){
			ok=1;
			break;
		}
	}
	if(ok){
		return 0;
	}
	else{
		return 1;
	}
}
int main(){
    int t;
    cin>>t;
    while(t--){
    ll n;
     cin>>n;
     ll a[n];
     for(int i=0;i<n;i++){
     	cin>>a[i];
	 }
	 if(check(a,n)){
	 	cout<<"YES\n";
	 }
	 else{
	 	cout<<"NO\n";
	 }
	}

   return 0;
}
