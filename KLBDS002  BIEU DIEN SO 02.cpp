#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        n = n + k - 1;
        k = k - 1;
        int cach = 1;
        for(int i = 1; i<= k ; i++, n--){
            cach = cach*n/i;
        }
        cout << cach << endl;
    }
    return 0;
}