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
    vector<int> cnt(V + 1, 0);
    vector<vector<int>> a(V + 1, vector<int>(V + 1, 10000));

    for(int i = 1; i <= E; i++) {
        int x, y, z; cin >> x >> y >> z;
        a[x][y] = a[y][x] = z;
        cnt[x]++;
        cnt[y]++;
    }
    if(k == 1) {
        for(int i = 1; i <= V; i++) cout << cnt[i] << " ";
    }
    else {
        cout << V << endl;
        for(int i = 1; i <= V; i++) {
            for(int j = 1; j <= V; j++) {
                if(i == j) cout << "0 ";
                else cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}