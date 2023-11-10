//#include"bits/stdc++.h"
//#define ll long long
//using namespace std;
//string trans(ll n){
//	if(n==0){
//		return "0";
//	}
//	string binary="";
//	while(n>0){
//		binary=to_string(n%2)+binary;
//		n/=2;
//	}
//	return binary;
//}
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		ll n;
//		cin >> n;
//		cout << trans(n) << endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		ll n;
		cin >> n;
		stack<ll>st;
		while(n!=0){
			st.push(n%2);
			n/=2;
		}
		while(!st.empty()){
			cout << st.top();
			st.pop();
		}
		cout << endl;
	}
	return 0;
}
