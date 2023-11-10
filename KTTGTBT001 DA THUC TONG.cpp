#include"bits/stdc++.h"
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		int n;
		float x;
		cin >> n >> x;
		float sum = 0;
		for(int k = 1; k<= n; k++){
			sum+=((float)pow(x,k))/(k*(k+1)/2);
		}
		cout << fixed << setprecision(3) << sum << endl;
	}
	return 0;
}
