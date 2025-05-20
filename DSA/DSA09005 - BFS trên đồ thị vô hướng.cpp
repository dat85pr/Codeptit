// BFS TRÊN ĐỒ THỊ VÔ HƯỚNG
#include<bits/stdc++.h>
using namespace std;
void BFS(vector<vector<int>> &list, int a, vector<bool> &visited){
    visited[a] = true;
    queue<int> q;
    q.push(a);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        cout << x << " ";
        for(int v : list[x]){
            if(!visited[v]){
                visited[v] = true;
                q.push(v);
            }
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
        BFS(list, a, visited);
        cout << endl;
    }
}