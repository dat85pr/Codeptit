#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

const int MAX = 105;
int n, s, t;
int adj[MAX][MAX];
bool visited[MAX];
vector<pair<int, int>> treeEdges;

void dfs(int u) {
    visited[u] = true;
    for (int v = 1; v <= n; ++v) {
        if (adj[u][v] == 1 && !visited[v]) {
            treeEdges.emplace_back(u, v);
            dfs(v);
        }
    }
}

void bfs(int start) {
    queue<int> q;
    visited[start] = true;
    q.push(start);
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v = 1; v <= n; ++v) {
            if (adj[u][v] == 1 && !visited[v]) {
                visited[v] = true;
                treeEdges.emplace_back(u, v);
                q.push(v);
            }
        }
    }
}

int main() {
    cin >> t >> n >> s;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> adj[i][j];

    fill(visited, visited + MAX, false);
    treeEdges.clear();

    if (t == 1) {
        dfs(s);
    } else {
        bfs(s);
    }

    if ((int)treeEdges.size() == n - 1) {
        cout << n - 1 << '\n';
        for (auto &edge : treeEdges)
            cout << edge.first << " " << edge.second << '\n';
    } else {
        cout << 0 << '\n';
    }


    return 0;
}
