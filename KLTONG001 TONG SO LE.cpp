#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
//int main(){
//     int t;
//     cin>>t;
//     while(t--){
//     ll l,r;
//     cin>>l>>r;
//     if(l%2==0){
//     	l+=1;
//	 }
//	 if(r%2==0){
//	 	r-=1;
//	 }
//	 ll so=(r-l)/2+1;
//	 cout<<so*(r+l)/2<<endl;
//
//	 }
//
//   return 0;
//}
int main(){
	int t;
	cin >> t;
	while(t--){
		int l,r;
		cin >> l >> r;
		if(l%2==0){
			l+=1;
		}
		if(r%2==0){
			r-=1;
		}
		ll so = (r-l)/2 +1;
		ll tong = so*(r+l)/2;
		cout << tong << endl;
	}
	return 0;
}
