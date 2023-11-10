#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

typedef long long ll;

// Function to multiply two matrices A and B
vector<vector<ll>> multiply(vector<vector<ll>>& A, vector<vector<ll>>& B) {
    int n = A.size();
    vector<vector<ll>> C(n, vector<ll>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += (A[i][k] * B[k][j]) % MOD;
                C[i][j] %= MOD;
            }
        }
    }
    return C;
}

// Function to perform binary exponentiation
vector<vector<ll>> power(vector<vector<ll>>& A, ll exp) {
    int n = A.size();
    vector<vector<ll>> result(n, vector<ll>(n, 0));

    // Initialize result matrix as identity matrix
    for (int i = 0; i < n; i++) {
        result[i][i] = 1;
    }

    while (exp > 0) {
        if (exp % 2 == 1) {
            result = multiply(result, A);
        }
        A = multiply(A, A);
        exp /= 2;
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<vector<ll>> A(n, vector<ll>(n));
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < n; j++) {
                cin >> A[i][j];
            }
        }

        // Compute A^k using binary exponentiation
        vector<vector<ll>> result = power(A, k);

        // Calculate the sum of elements on the antidiagonal of the resulting matrix
        ll res = 0;
        for (int i = 0; i < n; i++) {
            res += result[i][n - i - 1];
            res %= MOD;
        }

        cout << res << endl;
    }
    return 0;
}

