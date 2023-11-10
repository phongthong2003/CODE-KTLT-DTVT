#include"bits/stdc++.h"
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int dem = 0;
		map<int,int>mp;
		for(int i = 0; i< n; i++){
			int x;
			cin >> x;
			mp[x]++;
		}
		for(auto it:mp){
			if(it.second==1){
				dem++;
			}
		}
		cout << dem << endl;
	}
	return 0;
}
