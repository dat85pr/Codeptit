#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <fstream>
using namespace std;

int main() {
    fstream cin("DT.INP", ios::in);
    fstream cout("DT.OUT", ios::out);
    int k, V, E; cin >> k >> V >> E;
    vector<pair<int, int>> a;
    vector<int> cnt(V + 1, 0);
    
    for(int i = 1; i <= E; i++) {
        int x, y; cin >> x >> y;
        a.push_back({x, y});
        cnt[x]++;
        cnt[y]++;
    }
    if(k == 1) {
        for(int i = 1; i <= V; i++) cout << cnt[i] << " ";
    }
    else {
        cout << V << " " << E << endl;
        for(int i = 1; i <= V; i++) {
            for(pair<int, int> tmp : a) {
                if(tmp.first == i || tmp.second == i) cout << "1 ";
                else cout << "0 ";
            }
            cout << endl;
        }
    }
}