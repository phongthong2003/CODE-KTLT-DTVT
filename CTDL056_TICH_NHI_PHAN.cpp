#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll trans(ll binary_num){
    ll decima_num = 0, i = 0, remainder; //remainer: bien luu tru phan du khi chia cho 10
    while(binary_num!=0){                //i : Bien su dung dem cac vi tri cua cac chu so trong so nhi phan
        remainder = binary_num%10;
        binary_num/=10;
        decima_num += remainder * pow(2,i);
        ++i;
    }
    return decima_num;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        ll A = trans(a);
        ll B = trans(b);
        ll tich = A*B;
        cout << tich << endl;
    }
    return 0;
}
