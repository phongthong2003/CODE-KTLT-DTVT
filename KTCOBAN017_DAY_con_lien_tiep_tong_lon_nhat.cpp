#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll max_sum_array(vector<ll>& arr){
    ll max_all_array = arr[0];
    ll max_here = arr[0];
    for(int i = 1; i < arr.size(); i++){
        max_here = max((ll)arr[i],max_here + arr[i]);
        max_all_array = max(max_here, max_all_array);
    }
    return max_all_array;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <ll> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cout << max_sum_array (arr) << endl;
    }
    return 0;
}