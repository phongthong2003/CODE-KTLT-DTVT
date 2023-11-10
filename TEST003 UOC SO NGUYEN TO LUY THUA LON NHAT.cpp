#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        ll i = 0;
        ll a[1000], b[1000];
        ll min_prime = -1, max_power = 0;

        // Find and count prime factors of n
        for (ll j = 2; j * j <= n; (j < 3) ? j++ : j += 2) {
            int mark = 0;
            if (n % j == 0) {
                a[i] = j;
                b[i] = 0;
                mark++;
            }

            while (n % j == 0) {
                b[i]++;
                n /= j;

                if (b[i] > max_power) {
                    max_power = b[i];
                    min_prime = a[i];
                }
            }

            if (mark != 0) i++;
        }

        // Handle the remaining prime factor if it is greater than 1
        if (n > 1) {
            if (max_power < 1) {
                max_power = 1;
                min_prime = n;
            }
        }

        cout << min_prime << " " << max_power << endl;
    }

    return 0;
}

