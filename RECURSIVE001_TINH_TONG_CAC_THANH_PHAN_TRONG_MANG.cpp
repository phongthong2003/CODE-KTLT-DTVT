#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stringstream ss(s);
        vector<ll>vt;
        ll n,sum=0;
        while(ss>>n){
            vt.push_back(n);
            if(ss.peek()==','){
                ss.ignore();
            }
        }
        for(int j = 0; j<vt.size(); j++){
            sum+=vt[j];
        }
        cout << sum << endl;
    }
    return 0;
}