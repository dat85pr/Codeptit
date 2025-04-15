#include <bits/stdc++.h>
using namespace std;

#define maxn 105


int n, E = 0;
int a[maxn][maxn] = {};
bool vis[maxn] = {};
set<int> ke[maxn];
vector<pair<int, int>> dsc;

void DFS(int u) {
    vis[u] = true;
    for(int v : ke[u]) {
        if(!vis[v]) DFS(v);
    }
}
int tplt() {
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(vis[i]) continue;
        DFS(i);
        cnt++;
    }
    return cnt;
}

int main() {
    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> a[i][j];
            if(a[i][j] && j >= i + 1) {
                ke[i].insert(j);
                ke[j].insert(i);
                E++;
                dsc.push_back({i, j});
            }
        }
    }

    int cnt = tplt();
    vector<pair<int, int>> res;
    for(int i = 0; i < E; i++) {
        memset(vis, false, sizeof(vis));
        auto [x, y] = dsc[i];
        ke[x].erase(y);
        ke[y].erase(x);
        if(cnt < tplt()) res.push_back({x, y});
        ke[x].insert(y);
        ke[y].insert(x);
    }

    cout << res.size() << endl;
    for(auto [x, y] : res) cout << x << " " << y << endl;
    return 0;
}