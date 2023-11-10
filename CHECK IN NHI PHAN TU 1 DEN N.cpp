#include<bits/stdc++.h>
#define ll long long
using namespace std;
//
//string nhi_phan(ll n){
//    stack<ll> st;
//    while(n!=0){
//    	st.push(n%2);
//    	n/=2;
//	}
//	string nhiphan="";
//	while(!st.empty()){
//		nhiphan+=to_string(st.top());
//		st.pop();
//	}
//	return nhiphan;
//}
//
//int main(){
//    int t;
//    cin >> t;
//    while (t--) {
//        int n;
//        cin >> n;
//        for (int i = 1; i <= n; i++) {
//            cout << nhi_phan(i) << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}
vector<string>res;
void init(){
	queue<string>q;
	q.push("1");
	res.push_back("1");
	while(res.size() < 10000){
		// lau ra ptu dau hang doi
		string top = q.front();
		q.pop();
		res.push_back(top+"0");
		res.push_back(top+"1");
		q.push(top+"0");
		q.push(top+"1");
	}
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	init();
	while(t--){
		int n;
		cin >> n;
		for(int i = 0; i< n; i++){
			cout << res[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
