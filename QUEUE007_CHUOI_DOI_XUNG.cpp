#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    int left = 0, right = s.size() - 1;
    while(left<=right){
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
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        cout << check(s) << endl;
    }
    return 0;
}