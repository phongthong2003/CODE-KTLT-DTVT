#include <iostream>
#include <vector>
#include <climits>
using namespace std;

const int INF = INT_MAX;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int m, n;
        cin >> m >> n;
        vector<vector<int>> a(m, vector<int>(n));

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
            }
        }

        vector<vector<int>> dp(m, vector<int>(n, INF));

        // Initialize the last column of dp array
        for (int i = 0; i < m; ++i) {
            dp[i][n - 1] = a[i][n - 1];
        }

        // Dynamic Programming: Bottom-up approach
        for (int j = n - 2; j >= 0; --j) {
            for (int i = 0; i < m; ++i) {
                int nextRows[] = {i, i - 1, i + 1};
                for (int k = 0; k < 3; ++k) {
                    if (nextRows[k] >= 0 && nextRows[k] < m) {
                        dp[i][j] = min(dp[i][j], a[i][j] + dp[nextRows[k]][j + 1]);
                    }
                }
            }
        }

        // Find the minimum value in the first column
        int min_cost = INF;
        for (int i = 0; i < m; ++i) {
            min_cost = min(min_cost, dp[i][0]);
        }

        cout << min_cost << endl;
    }

    return 0;
}

