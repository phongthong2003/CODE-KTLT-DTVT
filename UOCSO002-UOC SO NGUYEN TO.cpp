#include"bits/stdc++.h"
using namespace std;
bool is_prime(int n) {
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    int max_divisor = sqrt(n) + 1;
    for (int i = 3; i < max_divisor; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		int dem = 0;
		for(int i = 1; i*i<=n;i++){
			if(n%i==0){
				if(i*i==n){
					if(is_prime(i)) dem++;
				}else{
					if(is_prime(i)) dem++;
					if(is_prime(n/i)) dem++;
				}
			}
		}
		cout << dem << endl;
	}
	return 0;
}

