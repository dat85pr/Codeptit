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
    vector<set<int>> dske(V + 1);
    vector<int> cnt(V + 1, 0);
    
    for(int i = 1; i <= E; i++) {
        int x, y; cin >> x >> y;
        dske[x].insert(y);
        dske[y].insert(x);
        cnt[x]++;
        cnt[y]++;
    }
    if(k == 1) {
        for(int i = 1; i <= V; i++) cout << cnt[i] << " ";
    }
    else {
        cout << V << endl;
        for(int i = 1; i <= V; i++) {
            cout << dske[i].size() << " ";
            for(int x : dske[i]) cout << x << " ";
            cout << endl;
        }
    }
}