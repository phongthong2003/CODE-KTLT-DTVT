#include"bits/stdc++.h"
using namespace std;
#define ll long long
int doi_xung(ll n){
	string s = to_string(n);
	int l = 0, r = s.size()-1;
	while(l<=r){
		if(s[l]!=s[r]){
			return 0;
		}else{
			l++;
			r--;
		}
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll temp = n;
		for(ll i = n,j = temp; ;i++,j--){
			if(doi_xung(i)==1 &&doi_xung(j)==0){
				cout << i << endl;
				break;
			}else if(doi_xung(i)==1 && doi_xung(j)==1){
				if(i!=j){
					cout <<j<<" "<< i << endl;
				}else{
					cout << i << endl;
				}
				break;
			}else if(doi_xung(i)==0&&doi_xung(j)==1){
				cout << j << endl;
				break;
			}
		}
	}
	return 0;
}
