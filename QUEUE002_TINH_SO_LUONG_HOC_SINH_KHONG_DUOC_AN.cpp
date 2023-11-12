#include<bits/stdc++.h>

using namespace std;
using ll = long long;

vector<int> change(string &s){
	vector<int> v;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == ','){
			s[i] = ' ';
		}
	}
	stringstream ss(s);
	string token;
	while(ss >> token){
		int num = stoi(token);
		v.push_back(num);
	}
	return v;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		vector<int> v1 = change(s1);
		vector<int> v2 = change(s2);
		queue<int> q1;
		queue<int> q2;
		for(int x : v1){
			q1.push(x);
		}
		for(int x : v2){
			q2.push(x);
		}
		int cnt = 0;
		while(!q1.empty() && cnt < q1.size()){
			if(q1.front() == q2.front()){
				q1.pop();
				q2.pop();
				cnt = 0;
			}
			else{
				q1.push(q1.front());
				q1.pop();
				cnt++;
			}
		}
		cout << q1.size() << endl;
	}
	return 0;
}