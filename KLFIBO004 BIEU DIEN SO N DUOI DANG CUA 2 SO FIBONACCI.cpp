#include <iostream>
using namespace std;
#define ll long long
#define MAX 1000000
ll a[MAX];

void fibo() {
    a[0] = 0, a[1] = 1;
    ll a1 = 1, a2 = 1;
    ll i = 2; 
    ll A;
    while(i <= MAX) {
        A = a1 + a2;
        a1 = a2;
        a2 = A;
        a[i] = A;
        i++;
    }
}

int main() {
    int t;
    cin >> t;
    fibo();

    while (t--) {
        ll n;
        cin >> n;
        int dem = 0;
        bool found = false;

        for (int i = 0; i < n; i++) {
            for (int j = n; j > i; j--) {
                if (a[i] + a[j] == n) {
                    if (!found) { 
                        dem++;
                        cout << a[i] << " " << a[j] << endl;
                        found = true; 
                    }
                    break;
                }
            }
            if (found) break; 
        }
        
        if (dem == 0) {
            cout << "-1" << endl;
        }
    }
    return 0;
}

