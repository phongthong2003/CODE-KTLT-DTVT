#include<bits/stdc++.h>
using namespace std;
int urgly_factorial(int n){
    stack<int>st;
    st.push(n);
    n--;
    int index = 0;
    while(n>0){
        if(index%4==0){
            st.top()*=n;
        }else if(index%4==1){
            st.top()/=n;
        }else if(index%4==2){
            st.push(n);
        }else{
            st.push(-n);
        }
        n--;
        index++;
    }
    int sum = 0;
    while(!st.empty()){
        sum+=st.top();
        st.pop();
    }
    return sum;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << urgly_factorial(n)<< endl;
    }
    return 0;
}