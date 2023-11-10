#include"bits/stdc++.h"
using namespace std;
#define ll long long
ll a[100000];
ll f[100000];
int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		a[0] = 0;
		f[0] = 0;
		for(int i = 1; i<=n; i++){
			f[i] = 1;
			for(int j = i -1 ;j>=1; j--){
				if(a[i]>a[j]){
					f[i] = max(f[i],f[j]+1);
				}
			}
		}
		ll dmax = 1;
		for(int i = 1; i <= n; i++){
			if(f[i]>=dmax){
				dmax = f[i];
			}
		}
		cout << dmax << endl;
	}
	return 0;
}
