#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <fstream>
using namespace std;

int main() {
    fstream cin("DT.INP", ios::in);
    fstream cout("DT.OUT", ios::out);
    int k, V, E; cin >> k >> V >> E;
    
    unordered_map<int, int> vao, ra;
    vector<vector<int>> a(V + 1, vector<int>(V + 1, 0));

    for(int i = 1; i <= E; i++) {
        int x, y; cin >> x >> y;
        ra[x]++;
        vao[y]++;
        a[x][y] = 1;
    }

    if(k == 1) {
        for(int i = 1; i <= V; i++) cout << vao[i] << " " << ra[i] << endl;
    }
    else {
        cout << V << endl;
        for(int i = 1; i <= V; i++) {
            for(int j = 1; j <= V; j++) cout << a[i][j] << " ";
            cout << endl;
        }
    }
}