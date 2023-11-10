#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long

bool csc(ll a[], ll n) {
    ll d = a[1] - a[0];
    int ok = 0; 
    for (int i = 1; i < n; i++) {
        if (a[i] - a[i - 1] != d) {
            ok = 1;
            break;
        }
    }
    if(ok){
    	return 0;
	}else{
		return 1;
	}
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (csc(a, n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
