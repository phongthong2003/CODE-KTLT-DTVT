#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool prime(ll n){
    if(n<=1){
        return 0;
    }
    if(n<=3){
        return 1;
    }
    if(n%2==0||n%3==0){
        return 0;
    }
    for(ll i = 5; i*i <= n; i++){
        if(n % i == 0 || n % (i + 2) == 0){
            return 0;
        }
    }
    return 1;
}

ll sum_prime(ll start, ll end){
    if(start > end){
        return 0;
    }
    if(prime(start)){
        return start + sum_prime(start + 1, end);
    }
    return sum_prime(start + 1, end);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll start, end;
        cin >> start >> end;
        cout << sum_prime(start, end) << endl;
    }
    return 0;
}
