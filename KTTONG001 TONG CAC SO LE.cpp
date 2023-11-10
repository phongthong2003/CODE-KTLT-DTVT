#include <bits/stdc++.h>
using namespace std;

long long int tong_le(int a, int b) {
    if (a > b || a % 2 == 0) {
        a++; // Make 'a' odd
    }
    if (b % 2 == 0) {
        b--; // Make 'b' odd
    }
    
    if (a > b) {
        return 0; // No odd numbers between 'a' and 'b'
    }
    
    long long int n = (b - a) / 2 + 1;
    return n * (a + b) / 2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << tong_le(a, b) << endl;
    }
    return 0;
}

