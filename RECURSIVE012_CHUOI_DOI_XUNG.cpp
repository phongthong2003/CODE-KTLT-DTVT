#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    int left =0, right = s.size()-1;
    while(left <= right){
        if(s[left]!=s[right]){
            return 0;
        }else{
            left++;
            right--;
        }
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        getline(cin,s);
        if(check(s)){
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }
    }
    return 0;
}