#include <iostream>
#include <vector>

using namespace std;

int countSubarraysWithSum(vector<int>& arr, int K, int S) {
    int N = arr.size();
    vector<vector<int>> dp(K + 1, vector<int>(S + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= N; ++i) {
        for (int k = K; k >= 1; --k) {
            for (int s = S; s >= arr[i - 1]; --s) {
                dp[k][s] += dp[k - 1][s - arr[i - 1]];
            }
        }
    }

    return dp[K][S];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int N, K, S;
        cin >> N >> K >> S;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        int result = countSubarraysWithSum(A, K, S);
        cout << result << endl;
    }

    return 0;
}

