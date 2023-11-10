#include"bits/stdc++.h"
using namespace std;
#define ll long long
string s[100005];
void giaithua(int n){
    int a[1000005], m = 1;
    ll r = 0,q;
    a[0]=1;
    for(int i = 2; i<= n; i++){
        for(int j = 0; j< m ; j++){
            q = r;
            r = (a[j]*i+r)/10;
            a[j]=(a[j]*i+q)%10; 
        }
        while(r>0){
            a[m]= r%10;
            m++;
            r/=10;
        }
        for(int p =m-1; p>=0;p--){
            s[i]+=char(a[p]+'0');
        }
    }
}
int main(){
    giaithua(100005);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==0||n==1) cout <<"1";
        else{
            cout << s[n];
        }
        cout << endl;
    }
    return 0;
}