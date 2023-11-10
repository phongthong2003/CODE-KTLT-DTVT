#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(long long n) {
    string s = to_string(n);
    int size = s.length(); // so chu so  
    long long sum = 0;
    for (char c : s) {
    	int digit = c -'0'; // duyet thanh ky tu so 
        sum += pow(digit, size);
    }
    return sum == n;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        long long n;
        cin >> n;
        if (isArmstrong(n)) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }
    return 0;
}
