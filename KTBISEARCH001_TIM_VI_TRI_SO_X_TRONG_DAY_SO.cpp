#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int tim(int a[],int n,int x){
  int l=0,r=n-1;
  int res=-1;
  while(l<=r){
    int m=(l+r)/2;
    if(a[m]==x){
      res=m;
      r=m-1;
    }
    else if(a[m]>x){
      r=m-1;
    }
    else{
      l=m+1;
    }
  }
  return res+1;
}
int main(){
  int n,m;
  cin>>n>>m;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int b[m];
  for(int i=0;i<m;i++){
    cin>>b[i];
    cout<<tim(a,n,b[i])<<" ";
  }
 return 0;
}
