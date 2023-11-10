#include<bits/stdc++.h>
using namespace std;
int lcm(int s1,int s2){
    return(s1*s2)/__gcd(s1,s2);
}
int main(){
    int s1,s2;
    cin >> s1 >> s2;
    cout << lcm(s1,s2) << endl;
    return 0;
}