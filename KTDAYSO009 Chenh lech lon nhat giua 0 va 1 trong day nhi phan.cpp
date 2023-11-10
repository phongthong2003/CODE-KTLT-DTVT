#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
     int t;
     cin>>t;
     while(t--){
   string s;
   cin>>s;
   int math=0,ans=0;
   for(int i=0;i<s.size();i++){
   	math+=(s[i]=='0')?1:-1;
   	if(math<0) math=0;
   	ans=max(ans,math);
   }
   if(ans==0){
   	cout<<-1<<"\n";
   }
   else{
   	cout<<ans<<"\n";
   }
	 }

   return 0;
}
