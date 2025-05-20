// DFS TRÊN ĐỒ THỊ VÔ HƯỚNG
#include<bits/stdc++.h>
using namespace std;
void DFS(vector<vector<int>> &list, int u, vector<bool> &visited){
    visited[u] = true;
    cout << u << " ";
    for(int v : list[u]){
        if(!visited[v]){
            DFS(list, v, visited);
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int V, E, a;
        cin >> V >> E >> a;
        vector<vector<int>> list(V + 1);
        for(int i = 0; i < E; i++){
            int u, v;
            cin >> u >> v;
            list[u].push_back(v);
            list[v].push_back(u);
        }
        vector<bool> visited(V + 1, false);
        DFS(list, a, visited);
        cout << endl;
    }
}