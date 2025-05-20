#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int V, E;
        cin >> V >> E;
        vector<int> degree(V + 1, 0);
        for(int i = 0; i < E; i++){
            int u, v;
            cin >> u >> v;
            degree[u]++;
            degree[v]++;
        }
        int odd = 0;
        for(int i = 1; i <= V; i++){
            if(degree[i] % 2 != 0){
                odd++;
            }
        }   
        if(odd == 0){
            cout << 2 << endl; // Chu trình Euler
        }
        else if(odd == 2){
            cout << 1 << endl; // Đường đi Euler
        }
        else{
            cout << 0 << endl; // Không có đường đi Euler
        }

    }
}