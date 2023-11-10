#include<bits/stdc++.h>
#include<numeric>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int s1,s2;
        cin >> s1 >> s2;
        cout << __gcd(s1,s2) << endl;
    }
    return 0;
}