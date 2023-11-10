//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//ll a[12]={1,0,0,2,10,4,40,92,352,724,2680,14200};
//
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		int n;
//		cin >> n;
//		cout << a[n-1] << endl;
//	}
//	return 0;
//}
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int c[100], c1[100], c2[100], x[100];
int n;
vector<int> a;

bool check(int i, int j) {
    if (c[j] == 0 || c1[i - j + n - 1] == 0 || c2[i + j] == 0) {
        return false;
    }
    return true;
}

void quan_hau(int i) {
    for (int j = 0; j < n; j++) {
        if (check(i, j)) {
            x[i] = j;
            c[j] = c1[i - j + n - 1] = c2[i + j] = 0;
            if (i == n - 1) {
                a.push_back(i);
            } else {
                quan_hau(i + 1);
            }
            c[j] = c1[i - j + n - 1] = c2[i + j] = 1;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        fill(c, c + n, 1);
        fill(c1, c1 + 2 * n - 1, 1);
        fill(c2, c2 + 2 * n - 1, 1);
        a.clear();
        quan_hau(0);
        cout << a.size() << endl;
    }
    return 0;
}


