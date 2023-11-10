#include"bits/stdc++.h"
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stringstream ss(s);
		priority_queue<int,vector<int>,greater<int>>pq;
		int n;
		while(ss >> n){
			pq.push(n);
			if(ss.peek()==','){
				ss.ignore();
			}
		}
		cout << pq.top() << endl;
	}
	return 0;
}
