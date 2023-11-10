#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; // Nh?p s? lu?ng testcase
    while (t--) {
        int N, M;
        cin >> N >> M; // Nh?p kích thu?c c?a ma tr?n
        
        // Nh?p ma tr?n
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cin >> A[i][j];
            }
        }
        
        // Tính d? dài du?ng di l?n nh?t
        vector<vector<int>> dp(N, vector<int>(M, 0));
        for (int i = 0; i < M; ++i) {
            dp[0][i] = A[0][i];
        }
        for (int i = 1; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                dp[i][j] = A[i][j] + max(dp[i - 1][j], max(dp[i - 1][max(0, j - 1)], dp[i - 1][min(M - 1, j + 1)]));
            }
        }
        
        // Tìm d? dài du?ng di l?n nh?t trên dòng cu?i cùng
        int maxLength = 0;
        for (int i = 0; i < M; ++i) {
            maxLength = max(maxLength, dp[N - 1][i]);
        }
        
        // Xu?t k?t qu?
        cout << maxLength << endl;
    }
    return 0;
}

