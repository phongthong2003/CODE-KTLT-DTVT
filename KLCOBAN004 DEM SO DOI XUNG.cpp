#include"bits/stdc++.h"
using namespace std;
long long a[18]={9,9,90,90,900,900,9000,9000,90000,90000,900000,900000,9000000,9000000,90000000,90000000,900000000,900000000};
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << a[n-1]<<endl;
	}
	return 0;
}
//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//ll a[18]={9,9,90,90,900,900,9000,9000,90000,90000,900000,900000,9000000,9000000,90000000,90000000,900000000,900000000};
//int main(){
//     int t;
//     cin>>t;
//     while(t--){
//    int k;
//    cin>>k;
//    cout<<a[k-1]<<"\n";
//	 }
//   return 0;
//}
