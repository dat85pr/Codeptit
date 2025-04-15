#include <bits/stdc++.h>
using namespace std;

#define maxn 105
int cnt, sz;
vector<vector<int>> a(maxn, vector<int>(maxn, 0));

// void dfs(vector<set<int>>& dske, int u, vector<bool>& vis) {
//     vis[u] = true;
//     cnt++;
//     for(int v : dske[u]) {
//         if(!vis[v]) dfs(dske, v, vis);
//     }
// }

void BFS(vector<set<int>>& dske, int s, vector<bool>& vis) {
    queue<int> qe;
    qe.push(s);
    while(!qe.empty()) {
        int v = qe.front(); qe.pop();
        vis[v] = true;
        cnt++;
        for(int t : dske[v]) {
            if(!vis[t]) {
                vis[t] = true;
                qe.push(t);
            }
        }
    }
}

int check_euler(int& V) {
    vector<set<int>> dske(maxn);
    vector<int> in(maxn, 0), out(maxn, 0);

    for(int i = 1; i <= V; i++) {
        cin >> sz;
        for(int j = 0; j < sz; j++) {
            int x; cin >> x;
            a[i][x] = 1;
        }
    }

    for(int i = 1; i <= V; i++) {
        for(int j = 1; j <= V; j++) {
            if(a[i][j]) {
                out[i]++;
                in[j]++;
                dske[i].insert(j);
                dske[j].insert(i);
            }
        }
    }
    
    
    vector<bool> vis(maxn, false);
    cnt = 0;
    BFS(dske, 1, vis);
    if(cnt < V) return 0;

    int s = 0, t = 0;
    for(int i = 1; i <= V; i++) {
        if(in[i] == out[i]) continue;
        else if(out[i] == in[i] + 1) s++;
        else if(in[i] == out[i] + 1) t++;
        else return 0;
    }

    if(s == 0 && t == 0) return 1;
    else if(s == 1 && t == 1) return 2;
    return 0;
}

void euler(int V) {
    int u; cin >> u;
    vector<set<int>> dske(maxn);

    for(int i = 1; i <= V; i++) {
        cin >> sz;
        for(int j = 0; j < sz; j++) {
            int x; cin >> x;
            a[i][x] = 1;
        }
    }

    for(int i = 1; i <= V; i++) {
        for(int j = 1; j <= V; j++) {
            if(a[i][j]) dske[i].insert(j);
        }
    }

    stack<int> st;
    st.push(u);
    vector<int> path;

    while(!st.empty()) {
        int v = st.top();
        if(!dske[v].empty()) {
            int w = *dske[v].begin();
            st.push(w);
            dske[v].erase(w);
        }
        else {
            path.push_back(v);
            st.pop();
        }
    }

    reverse(path.begin(), path.end());
    for(int x : path) cout << x << " ";
}

int main() {
    // freopen("CT.INP", "r", stdin);
	// freopen("CT.OUT", "w", stdout);
    int k, V; cin >> k >> V;
    
    if(k == 1) cout << check_euler(V) << endl;
    else euler(V);
    return 0;
}