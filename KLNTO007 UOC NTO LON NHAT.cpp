#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a[100000];

// H�m ki?m tra xem m?t s? c� ph?i l� s? nguy�n t? hay kh�ng
bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

ll uoc_max(ll l, ll r, ll a[]) {
    ll max_prime_divisor = -1; // Kh?i t?o u?c nguy�n t? l?n nh?t l� -1
    for (ll i = l; i <= r; i++) {
        if (a[i] % 2 == 0) continue; // B? qua c�c s? ch?n

        // Ki?m tra u?c nguy�n t? c?a a[i] v� c?p nh?t max_prime_divisor n?u c?n
        for (ll j = 2; j <= sqrt(a[i]); j++) {
            if (a[i] % j == 0 && isPrime(j)) {
                max_prime_divisor = max(max_prime_divisor, j);
                while (a[i] % j == 0) {
                    a[i] /= j;
                }
            }
        }

        // N?u a[i] v?n c�n du m?t u?c nguy�n t? l?n hon max_prime_divisor
        if (a[i] > 1 && isPrime(a[i])) {
            max_prime_divisor = max(max_prime_divisor, a[i]);
        }
    }

    return max_prime_divisor;
}

int main() {
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll l, r;
    cin >> l >> r;

    ll result = uoc_max(l, r, a);
    if (result == -1) {
        cout << "Khong co uoc nguyen to." << endl;
    } else {
        cout << "Uoc nguyen to lon nhat trong doan [" << l << ", " << r << "] la: " << result << endl;
    }

    return 0;
}

