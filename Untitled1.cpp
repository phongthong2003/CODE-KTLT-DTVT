#include<bits/stdc++.h>
using namespace std;
int kt(int n){
	if(n<2){
		return 0; 
	} 
	else{
		for(int i=2;i*i<=n;i++){
			if(n%i==0){
				return 0; 
			} 
		}
		return 1; 
	} 
} 
int main(){
	for(int i=3;i<=1000000;i+=2){
		if(kt(i)){
			cout<<i<<","; 
		} 
	} 
} 
