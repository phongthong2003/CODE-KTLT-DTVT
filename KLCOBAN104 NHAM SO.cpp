#include"bits/stdc++.h"
using namespace std;
#define ll long long
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		int a,b;
		cin >> a >> b;
		string str_a = to_string(a);
		string str_b = to_string(b);
		for(char &c:str_a){
			if(c=='5') c='3';
		}
		for(char &c:str_b){
			if(c=='5') c='3';
		}
		int min_sum = stoi(str_a)+stoi(str_b);
		str_a = to_string(a);
		str_b = to_string(b);
		for(char &c :str_a){
			if(c=='3') c='5';
		}
		for(char &c:str_b){
			if(c=='3') c='5';
		}
		int max_sum = stoi(str_a)+stoi(str_b);
		cout << min_sum <<" "<<max_sum<<endl;
	}
	return 0;
}
