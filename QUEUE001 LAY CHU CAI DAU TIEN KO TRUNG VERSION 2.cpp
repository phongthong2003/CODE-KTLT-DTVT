#include"bits/stdc++.h"
using namespace std;

int first_char(string s){
	unordered_map<char,int>char_count;
	queue<char>char_queue;
	for(char c:s){
		char_count[c]++;
		char_queue.push(c);
		while(!char_queue.empty()&&char_count[char_queue.front()>1]){
			char_queue.pop();
		}
	}
	return char_queue.empty() ? -1:s.find(char_queue.front());
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		cout << first_char(s) << endl;
	}
	return 0;
}
