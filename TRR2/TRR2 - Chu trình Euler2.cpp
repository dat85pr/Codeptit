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

int check(vector<int> cnt) {
	int count = 0;
	for(int x : cnt) count += x & 1;
	if(count == 0) return 1;
	else if(count == 2) return 2;
	return 0;
}

int cntDfs = 0;

void DFS(vector<vector<int>> dske, int u, vector<bool>& vis) {
    vis[u] = true;
    cntDfs++;
    for(int v : dske[u]) {
        if(!vis[v]) DFS(dske, v, vis);
    }
}

int checkEuler(vector<vector<int>>& dske, int& V, vector<int>& cnt) {
    vector<bool> vis(maxn, false);
    DFS(dske, 1, vis);
    if(cntDfs < V) return 0;

    return check(cnt);
}

void Euler(int u, vector<set<int>> dske, int V, int E, vector<int>& path) {
    stack<int> st;
    st.push(u);

    while (!st.empty()) {
        int v = st.top();
        if (!dske[v].empty()) {
            int w = *dske[v].begin();
            st.push(w);
            dske[v].erase(w);
            dske[w].erase(v);
        } else {
            path.push_back(v);
            st.pop();
        }
    }
}

int main() {
    // fstream cin("CT.in", ios::in);
    // fstream cout("CT.out", ios::out);
	int k; cin >> k;
	if(k == 1) {
		int V; cin >> V;
        vector<vector<int>> dske(maxn);
		vector<int> cnt(maxn);
		for(int i = 1; i <= V; i++) {
            for(int j = 1; j <= V; j++) {
                int x; cin >> x;
                if(x) {
                    cnt[i]++;
                    dske[i].push_back(j);
                    dske[j].push_back(i);
                }
            }
        }
		cout << checkEuler(dske, V, cnt) << endl;
	}
	else if(k == 2) {
		int V, E = 0, u; cin >> V >> u;
        vector<set<int>> dske(maxn);
        
        for(int i = 1; i <= V; i++) {
            for(int j = 1; j <= V; j++) {
                int x; cin >> x;
                if(x) {
                    dske[i].insert(j);
                    dske[j].insert(i);
                    E++;
                }
            }
        }
        E /= 2;
        vector<int> path;
        Euler(u, dske, V, E, path);
        reverse(path.begin(), path.end());
        for (int x : path) cout << x << " ";
	}
	return 0;
}