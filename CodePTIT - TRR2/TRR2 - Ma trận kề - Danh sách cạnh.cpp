#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {
    // fstream cin("DT.INP", ios::in);
    // fstream out("DT.OUT", ios::out);
    int k, V; cin >> k >> V;

    vector<vector<int>> a(V + 1, vector<int>(V + 1));
    vector<int> cnt(V + 1, 0);
    vector<pair<int, int>> res;
    
    for(int i = 1; i <= V; i++) {
        for(int j = 1; j <= V; j++) {
            cin >> a[i][j];
            if(a[i][j] && j >= i + 1) {
                res.push_back({i, j});
                cnt[i]++;
                cnt[j]++;
            }
        }
    }
    if(k == 1) {
        for(int i = 1; i <= V; i++) cout << cnt[i] << " ";
    }
    else {
        cout << V << " " << res.size() << endl;
        for(auto [x, y] : res) cout << x << " " << y << endl;
    }
}