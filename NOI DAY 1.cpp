#include"bits/stdc++.h"
using namespace std;
#define MOD 1000000007
#define ll long long
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		ll value;
		priority_queue<ll, vector<ll>,greater<ll>>a;// hang cho
		cin >> n;
		for(int i = 0; i<n;i++){
		   cin >> value;
		   a.push(value);
		}
		ll res = 0;
		while(a.size()>1){ // lay 2 ptu tro len de lam hang doi 
			ll x = a.top();a.pop();
			ll y = a.top();a.pop();
			a.push(x+y);
			res+=x+y;
		}
		cout << res << endl;
	}
	return 0;
}
