#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        int a, b;
        cin >> a >> b;
        string strA = to_string(a);
        string strB = to_string(b);

        for (char &c : strA) {
            if (c == '5') c = '3'; 
        }
        for (char &c : strB) {
            if (c == '5') c = '3'; 
        }

        int minSum = stoi(strA) + stoi(strB);

        strA = to_string(a);
        strB = to_string(b);

        for (char &c : strA) {
            if (c == '3') c = '5'; 
        }
        for (char &c : strB) {
            if (c == '3') c = '5'; 
        }

        int maxSum = stoi(strA) + stoi(strB);

        cout << minSum << " " << maxSum << endl;
    }

    return 0;
}
