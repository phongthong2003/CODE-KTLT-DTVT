#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long N;
        int A, B;
        cin >> N >> A >> B;

        string result = "";
        bool found = false;

        for (int numA = 0; numA <= N; ++numA) {
            int remaining = N - numA;
            if (remaining % 2 == 0) {
                int numB = remaining / 2;
                string temp = string(numA, char('0' + A)) + string(numB, char('0' + B));
                sort(temp.begin(), temp.end());
                if (stoll(temp) >= N && (result.empty() || temp < result)) {
                    result = temp;
                    found = true;
                }
            }
        }

        if (found) {
            cout << result << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}

