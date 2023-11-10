#include"bits/stdc++.h"
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		int arr[10]= {0}; //  tao mang de luu
		for(int i = min(a,b); i<= max(a,b); i++){
			string s = to_string(i); // doi sang string
			for(int j = 0; j < s.size(); j++){
				arr[(s[j]-'0')]++;
			}
			s="";
		}
		for(int i = 0; i < 10; i++){
			cout << arr[i] <<" ";
		}
		cout << endl;
	}
	return 0;
}
