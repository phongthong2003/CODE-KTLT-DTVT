#include <iostream>
#include <cmath>
using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        if (k % 2 == 0) {
            cout << int(pow(10, k / 2) - pow(10, k / 2 - 1)) << endl;
        } else {
            cout << int((pow(10, (k - 1) / 2) - pow(10, (k - 1) / 2 - 1)) * 10) << endl;
        }
    }
    return 0;
}

