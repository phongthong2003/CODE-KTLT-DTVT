#include"bits/stdc++.h"
using namespace std;
string dex_to_hex(long long n){
  int r;
  string hno="";
  char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
  while(n>0){
    r=n%16;
    hno=hex[r]+hno;
    n/=16;
  }
  return hno;
  }
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		long long n;
		cin >> n;
		if(n==0){
			cout <<"0"<<endl;
		}else{
			cout << dex_to_hex(n) << endl;
		}
	}
	return 0;
}
