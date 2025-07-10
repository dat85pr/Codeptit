#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <unordered_map>
#include <fstream>
#include <algorithm>
using namespace std;

#define maxn 105


int n, st, en, cnt = 0;
int a[maxn][maxn] = {}, path[maxn] = {};
bool vis[maxn] = {};

void DFS1(int u, int d) {
    if(d > 2) return;

    if(d == 2 && u == en) {
        cnt++;
        return;
    }

    vis[u] = true;
    for(int v = 1; v <= n; v++) {
        if(!vis[v] && a[u][v]) {
            DFS1(v, d + 1);
        }
    }
    vis[u] = false;
}

bool ok = false;

void DFS2(int u) {
    if(u == en) {
        ok = true;
        return;
    }
    
    vis[u] = true;
    for(int v = 1; v <= n; v++) {
        if(!vis[v] && a[u][v]) {
            path[v] = u;
            DFS2(v);
            if(ok) return;
        }
    }
    vis[u] = false;
}

int main() {
    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);
    int k; cin >> k;
    cin >> n >> st >> en;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    if(k == 1) {
        DFS1(st, 0);
        cout << cnt << endl;
    }
    else {
        DFS2(st);
        if(!ok) cout << "0" << endl;
        else {
            vector<int> res;
            int u = en;
            while(u != st) {
                res.push_back(u);
                u = path[u];
            }
            res.push_back(st);

            for(int i = res.size() - 1; i >= 0; i--) cout << res[i] << " ";
        }
    }
    return 0;
}