#include<iostream>
#include<vector>
using namespace std;

vector<int> dp(10001, -1);

int reduce(int n) {
    if(n == 1) return 0;
    if(dp[n] != -1) return dp[n];
    int res = reduce(n-1) + 1;
    if(n%2 == 0) res = min(res, reduce(n/2) + 1);
    if(n%3 == 0) res = min(res, reduce(n/3) + 1);
    dp[n] = res;
    return res;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << reduce(n) << endl;
    }
    return 0;
}