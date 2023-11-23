#include<bits/stdc++.h>
using namespace std;

vector<int> primes;
bool prime[1001];

void sieve() {
    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=1000; p++) {
        if (prime[p] == true) {
            for (int i=p*p; i<=1000; i += p)
                prime[i] = false;
        }
    }
    for(int i=2;i<=1000;i++){
        if(prime[i])
            primes.push_back(i);
    }
}

int countWays(int N, int K, int idx){
    if(N==0 && K==0) return 1;
    if(idx==primes.size() || K==0 || N<0) return 0;
    return countWays(N-primes[idx], K-1, idx+1) + countWays(N, K, idx+1);
}

int main(){
    sieve();
    int t;
    cin>>t;
    while(t--){
        int N, K;
        cin>>N>>K;
        cout<<countWays(N, K, 0)<<endl;
    }
    return 0;
}
