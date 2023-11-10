#include"bits/stdc++.h"
using namespace std;
const int INF = 1e6 + 1;
int n, m;
vector<vector<int>> graph;
int bestCost = INF;
void tsp(int mask, int u, int cost) {
    if (mask == (1 << n) - 1) { 
	// mask la so nguyen bieu dien trong day nhi phan
	// (1<<n)-1 tao ra 1 so co tat ca cac bit tu 0 -> n-1 deu la 1 
	// mask == (1<< n)-1 Kiem tra xem da di qua tat ca cac thanh pho hay chua
        bestCost = min(bestCost, cost + graph[u][0]); 
        return;
    }
    if (cost >= bestCost) {
        return; 
    }
    for (int v = 0; v < n; ++v) {
        if (!(mask & (1 << v))) { // kiem tra bit o vi tri v cua mask co la 1 hay khong. if == 1 tuc la thanh pho nay da di qua 
            tsp(mask | (1 << v), v, cost + graph[u][v]);
        }
    }
}
int main() {
    cin >> n >> m;
    graph.resize(n, vector<int>(n, INF));
    for (int i = 0; i < m; ++i) {
        int u, v, c;
        cin >> u >> v >> c;
        graph[u - 1][v - 1] = min(graph[u - 1][v - 1], c);
    }
    tsp(1, 0, 0);
    cout << bestCost << endl;
    return 0;
}

