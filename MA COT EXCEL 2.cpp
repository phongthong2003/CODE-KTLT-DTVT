#include"bits/stdc++.h"
using namespace std;
int main(){
	long long n;
	while(cin >> n){
		string result = "";
		while(n>0){
			n -= 1;
			char temp = 'A'+(n%26);
			result = temp + result;
			n/=26;
		}
		cout << result << endl;
	}
	return 0;
}
