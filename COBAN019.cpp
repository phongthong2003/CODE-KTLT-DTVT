#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

ull dem(ull n) {
    if (n < 2) {
        return n;
    }
    ull result = 0;
    ull i = sqrt(n);
    result = 1 + min({n % 3 + dem(n / 3), n % 2 + dem(n / 2), n - i * i + dem(i)});
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ull n;
        cin >> n;
        cout << dem(n) << endl;
    }
    return 0;
}

