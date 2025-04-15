#include <bits/stdc++.h>
using namespace std;

#define maxn 105


int n;
int a[maxn][maxn] = {};
bool vis[maxn] = {};


void BFS(int s) {
    queue<int> qe;
    qe.push(s);
    
    while(!qe.empty()) {
        int u = qe.front(); qe.pop();

        vis[u] = true;
        for(int v = 1; v <= n; v++) {
            if(!vis[v] && a[u][v]) {
                qe.push(v);
            }
        }
    }
}

int tplt() {
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(vis[i]) continue;
        BFS(i);
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
        }
    }    

    int cnt = tplt();
    vector<int> res;
    for(int i = 1; i <= n; i++) {
        memset(vis, false, sizeof(vis));
        vis[i] = true;
        if(cnt < tplt()) res.push_back(i);
    }

    cout << res.size() << endl;
    for(int x : res) cout << x << " ";
    return 0;
}