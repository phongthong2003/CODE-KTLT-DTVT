#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define MAX 10000

ull ugly[MAX];

void uglyNumbers() {
    ull x2 = 2, x3 = 3, x5 = 5;
    ull i2 = 0, i3 = 0, i5 = 0;

    ugly[0] = 1;
    for (int i = 1; i < MAX; i++) {
        ugly[i] = min(x2, min(x3, x5));
        if (ugly[i] == x2) {
            i2++;
            x2 = ugly[i2] * 2;
        }
        if (ugly[i] == x3) {
            i3++;
            x3 = ugly[i3] * 3;
        }
        if (ugly[i] == x5) {
            i5++;
            x5 = ugly[i5] * 5;
        }
    }
}

int main() {
    int t;
    cin >> t;
    uglyNumbers();
    while (t--) {
        int n;
        cin >> n;
        cout << ugly[n - 1] << endl;
    }
    return 0;
}
