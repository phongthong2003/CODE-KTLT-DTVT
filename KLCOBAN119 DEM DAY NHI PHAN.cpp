#include <bits/stdc++.h>
using namespace std;
#define ll long long

int countZerosInBinary(ll num) {
    int count = 0;
    while (num > 0) {
        if ((num & 1) == 0) {
            count++;
        }
        num >>= 1;
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while(t--){
    	ll N, K;
    cin >> N >> K;
    int count = 0;
    for (ll i = 0; i <= N; ++i) {
        if (countZerosInBinary(i) == K) {
            count++;
        }
    }
    cout << count << endl;
	}
    return 0;
}

