#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, l;
        cin >> n >> l;

        set<long long> present_delegates;
        for (long long i = 0; i < n - 1; ++i) {
            long long delegate_number;
            cin >> delegate_number;
            present_delegates.insert(delegate_number);
        }

        for (long long i = 1; i <= n; ++i) {
            if (present_delegates.find(l) == present_delegates.end()) {
                cout << l << endl;
                break;
            }
            ++l;
        }
    }

    return 0;
}

