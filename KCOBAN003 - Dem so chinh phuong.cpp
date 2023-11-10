#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long sqrt_a = ceil(sqrt(a));
        long long sqrt_b = floor(sqrt(b));
        long long dem = max(0LL, sqrt_b - sqrt_a + 1);

        cout << dem << endl;
    }
    return 0;
}
