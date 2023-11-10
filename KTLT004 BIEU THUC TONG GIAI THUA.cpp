#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
     int t;
     cin>>t;
     while(t--){
     float x;
     int n;
     cin>>n>>x;
     float s=1.0,sum=0;
     for(int k=1;k<=n;k++){
     	s*=x/k;
     	sum+=s;
	 }
     cout<<setprecision(3)<<fixed<<sum<<" "<<"\n";

	 }

   return 0;
}
