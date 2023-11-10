//#include"bits/stdc++.h"
//#define ll long long
//using namespace std;
//const ll mod = 1e9+7;
//ll dem(ll n){
//	vector<int>dp(n+1,0);
//	dp[0]=1;
//	dp[1]=1;
//	for(int i = 2; i <= n; i++){
//		dp[i]=(dp[i-1]+dp[i-2])%mod;
//	}
//	return dp[n];
//}
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		ll n;
//		cin >> n;
//		cout << dem(n) << endl;
//	}
//	return 0;
//}
//#include"bits/stdc++.h"
//#define ll long long
//using namespace std;
//const ll mod = 1e9+7;
//
//ll dem(ll n){
//	ll a = 1, b = 1;
//	for(int i = 2; i <= n; i++){
//		ll temp = b;
//		b = (a + b) % mod;
//		a = temp;
//	}
//	return b;
//}
//
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		ll n;
//		cin >> n;
//		cout << dem(n) << endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
ll A[2][2],B[2][2],n;
void nhan(ll x[2][2],ll y[2][2]){
    ll a11=(x[0][0]*y[0][0]%mod+x[0][1]*y[1][0]%mod)%mod;
    ll a12=(x[0][0]*y[0][1]%mod+x[0][1]*y[1][1]%mod)%mod;
    ll a21=(x[1][0]*y[0][0]%mod+x[1][1]*y[1][0]%mod)%mod;
    ll a22=(x[1][0]*y[0][1]%mod+x[1][1]*y[1][1]%mod)%mod;
    A[0][0]=a11;
    A[0][1]=a12;
    A[1][0]=a21;
    A[1][1]=a22;
}
void power(ll a[2][2],ll n){
  if(n<=1){
    return;
  }
  power(a,n/2);
  nhan(a,a);
  if(n&1){
    nhan(a,B);
  }
}
void Solve() {
  A[0][0] = A[0][1] = A[1][0] = 1;
  A[1][1] = 0;
  B[0][0] = B[0][1] = B[1][0] = 1;
  B[1][1] = 0;
  cin >> n;
  if (n == 0)
    cout << 0;
  else {
    power(A, n);
    cout << A[0][0];
  }
  cout <<"\n";
}
int main(){
  int t;
  cin>>t;
  while(t--){
    Solve();
  }
//  system("pause");
}

