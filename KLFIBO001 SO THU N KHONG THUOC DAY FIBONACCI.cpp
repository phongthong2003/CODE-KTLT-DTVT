//#include"bits/stdc++.h"
//#define ll long long
//using namespace std;
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//bool isPerfectSquare(long long x) {
//    long long sqrt_x = sqrt(x);
//    return sqrt_x * sqrt_x == x;
//}
//
//bool isFibonacci(long long x) {
//
//    return isPerfectSquare(5 * x * x + 4) || isPerfectSquare(5 * x * x - 4);
//}
//
//long long not_fibo(int n) {
//    long long num = 1;
//    while (n > 0) {
//        num++;
//        if (!isFibonacci(num)) {
//            n--;
//        }
//    }
//    return num;
//}
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		int n;
//		cin >> n;
//		cout <<not_fibo(n)<<endl;
//	}
//	return 0;
//}
#include"bits/stdc++.h"
using namespace std;
#define ll long long
ll non_fibo(ll n){
	ll a1 = 1 , a2 = 2, a3 = 3;
	while(n>0){
		a1 = a2;
		a2 = a3;
		a3 = a1 + a2;
		n = n -(a3-a2-1);
	}
	n = n+(a3-a2-1);
	return a2 + n;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		cout << non_fibo(n) << endl;
	}
	return 0;
}
