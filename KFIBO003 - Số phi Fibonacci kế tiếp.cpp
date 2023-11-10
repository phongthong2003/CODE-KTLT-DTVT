#include"bits/stdc++.h"
using namespace std;
bool fibo(long long n){
    long long a= 0 , b = 1;
    while(b < n){
        long long temp = b;
        b = a+b;
        a = temp;
    }
    return b == n;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long so_lon = n+1;
        while(true){
            if(!fibo(so_lon)){
                cout << so_lon << endl;
                break;
            }
            so_lon++;
        }
    }
    return 0;
}