#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll check(ll x){
  if(x<=3) return x>1;
  if(x%2==0||x%3==0) return 0;
  for(ll i=5;i*i<=x;i+=6){
    if(x%i==0||x%(i+2)==0){
      return 0;
    }
  }
  return 1;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    ll l,r;
    cin>>l>>r;
    if(r%2==0&&r!=2){
      r-=1;
    }
    if(l%2==0&&l!=2){
      l+=1;
    }
    for(ll i=r;i>=l;i-=2){
      if(check(i)){
        cout<<i<<"\n";
        break;
      }
    }
  }

}
