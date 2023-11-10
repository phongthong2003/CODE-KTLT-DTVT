#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void sieve(vector<bool>& primes, int n) {
    primes.resize(n + 1, true);
    primes[0] = primes[1] = false;
    int limit = sqrt(n);
    for (int i = 2; i <= limit; ++i) {
        if (primes[i]) {
            for (int j = i * i; j <= n; j += i) {
                primes[j] = false;
            }
        }
    }
}

bool isFullPrime(int num, const vector<bool>& primes) {
    while (num > 0) {
        int digit = num % 10;
        if (!primes[digit]) {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    vector<bool> primes;
    sieve(primes, 1000000); // Sàng nguyên t? cho s? n t?i ða là 10^6
    while (t--) {
        int n;
        cin >> n;
        int count = 0;
        for (int i = 2; i <= n; ++i) {
            if (primes[i] && isFullPrime(i, primes)) {
                ++count;
            }
        }
        cout << count << endl;
    }
    return 0;
}
//#include <iostream>
//#include <cmath>
//
//#define ll long long
//
//int check(int n) {
//    while (n) {
//        int x = n % 10;
//        if (x != 2 && x != 3 && x != 5 && x != 7) {
//            return 0;
//        }
//        n /= 10;
//    }
//    return 1;
//}
//
//int main() {
//    const int n1 = 1000001;
//    int a[n1] = {0};
//    a[0] = a[1] = 1;
//    for (int i = 2; i * i <= n1; ++i) {
//        if (a[i] == 0) {
//            for (int j = i * i; j <= n1; j += i) {
//                if (a[j] == 0) {
//                    a[j] = 1;
//                }
//            }
//        }
//    }
//    
//    int t;
//    std::cin >> t;
//    while (t--) {
//        int n;
//        std::cin >> n;
//        int ans = 0;
//        for (int i = 2; i <= n; i++) {
//            if (a[i] == 0) {
//                if (check(i)) {
//                    ans++;
//                }
//            }
//        }
//        std::cout << ans << "\n";
//    }
//
//    return 0;
//}
