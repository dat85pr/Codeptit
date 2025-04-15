#include <iostream>
#include <vector>
#include <set>
#include <stack>
#include <map>
#include <unordered_map>
#include <fstream>
using namespace std;

#define maxn 105
int cnt;

void dfs(vector<set<int>>& dske, int u, vector<bool>& vis) {
    vis[u] = true;
    cnt++;
    for(int v : dske[u]) {
        if(!vis[v]) dfs(dske, v, vis);
    }
}

int check_euler(int& V) {
    vector<set<int>> dske(V + 1);
    vector<int> in(V + 1, 0), out(V + 1, 0);

    for(int i = 1; i <= V; i++) {
        for(int j = 1; j <= V; j++) {
            int x; cin >> x;
            if(x) {
                out[i]++;
                in[j]++;
                dske[i].insert(j);
                dske[j].insert(i);
            }
        }
    }
    
    vector<bool> vis(V + 1, false);
    cnt = 0;
    dfs(dske, 1, vis);
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
    int m = 0;
    vector<set<int>> dske2(V + 1);
    vector<vector<int>> a(V + 1, vector<int>(V + 1));
    for(int i = 1; i <= V; i++) {
        for(int j = 1; j <= V; j++) {
            cin >> a[i][j];
            if(a[i][j]) {
                dske2[i].insert(j);
                m++;
            }
        }
    }

    stack<int> st;
    st.push(u);
    vector<int> path;

    while(m) {
        int v = st.top();
        
        if(dske2[v].size()) {
            int w = *dske2[v].begin();
            
            st.push(w);
            m--;
            dske2[v].erase(w);
        }
        else {
            path.push_back(v);
            st.pop();
        }
    }
    while(!st.empty()) {
        path.push_back(st.top()); st.pop();
    }

    for(int  i = path.size() - 1; i >= 0; i--) cout << path[i] << " ";
}

int main() {
    freopen("CT.INP", "r", stdin);
	freopen("CT.OUT", "w", stdout);
    int k, V; cin >> k >> V;
    
    if(k == 1) cout << check_euler(V) << endl;
    else euler(V);
    return 0;
}