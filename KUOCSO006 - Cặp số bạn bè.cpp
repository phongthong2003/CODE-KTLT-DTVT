// #include <iostream>
// #include <cmath>
// using namespace std;

// int sum_Divisors(int n) {
//     int sum = 0;
//     for (int i = 1; i <= n/2; i++) {
//         if (n % i == 0) {
//             sum += i;
//         }
//     }
//     return sum;
// }

// int main() {
//     int t;
//     cin >> t;
    
//     while (t--){
//         int a, b;
//         cin >> a >> b;
        
//         if (a == sum_Divisors(b) && b == sum_Divisors(a)){
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
    
//     return 0;
// }



#include <iostream>

using namespace std;

long long tong_uoc(long long n) {
    long long tong = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            if (i != n / i) {
                tong += i+ n / i;
            } else {
                tong += i;
            }
        }
    }
    return tong;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (b== tong_uoc(a)&&  a==tong_uoc(b)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
