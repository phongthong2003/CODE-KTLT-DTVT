#include <bits/stdc++.h>
using namespace std;

#define mod 123456789
typedef long long ll;

ll dem(ll a, ll b) {
    if (b == 0) return 1;
    ll res = dem(a, b / 2) % mod;
    if (b % 2 == 0) {
        return (res * res) % mod;
    } else {
        return (((res * res) % mod) * a) % mod;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << dem(2, n - 1) << endl;
    }
    return 0;
}

