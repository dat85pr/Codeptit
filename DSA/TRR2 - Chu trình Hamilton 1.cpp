#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

const int MAX = 100;
int n, u, t = 0; 
int adj[MAX][MAX]; 
vector<int> path; 
vector<bool> visited; 
vector<vector<int>> cycles; 

void backtrack(int current, int count) {
    if (count == n) {
        if (adj[current][u] == 1) { 
            path.push_back(u);
            cycles.push_back(path);
            t++;
            path.pop_back();
        }
        return;
    }

    for (int v = 1; v <= n; v++) {
        if (!visited[v] && adj[current][v] == 1) {
            visited[v] = true;
            path.push_back(v);
            backtrack(v, count + 1);
            path.pop_back();
            visited[v] = false;
        }
    }
}

int main() {


    cin >> n >> u;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> adj[i][j];
        }
    }

    visited.resize(n + 1, false);
    visited[u] = true;
    path.push_back(u);

    backtrack(u, 1);

    cout << t << endl;
    for (const auto& cycle : cycles) {
        for (int v : cycle) {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}
