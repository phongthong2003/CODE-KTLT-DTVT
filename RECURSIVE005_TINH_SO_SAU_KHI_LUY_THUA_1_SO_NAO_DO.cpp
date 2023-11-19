#include<bits/stdc++.h>
using namespace std;
double mypow(double x, int n){
    if(n==0) return 1;
    return x*mypow(x,n-1);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        double x;
        cin >> x >> n;
        if(n<0){
            n*=1;
            cout << 1/mypow(x,n) << endl;
        }else{
            cout << mypow(x,n) << endl;
        }
    }
    return 0;
}