#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <unordered_map>
#include <fstream>
#include <algorithm>
using namespace std;

#define maxn 105


int n;
int a[maxn][maxn] = {};
bool vis[maxn] = {};

set<int> path;
vector<set<int>> res;

void DFS(int u) {
    path.insert(u);
    vis[u] = true;
    for(int v = 1; v <= n; v++) {
        if(!vis[v] && a[u][v]) {
            DFS(v);
        }
    }
}

int main() {
    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 1; i <= n; i++) {
        if(vis[i]) continue;
        DFS(i);
        res.push_back(path);
        path.clear();
    }

    cout << res.size() << endl;
    for(auto v : res) {
        for(int x : v) cout << x << " ";
        cout << endl;
    }
    return 0;
}