#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <fstream>
using namespace std;

int main() {
    fstream cin("DT.INP", ios::in);
    fstream cout("DT.OUT", ios::out);
    int k, V; cin >> k >> V;
    set<vector<int>> dsc;
    vector<int> cnt(V + 1, 0);
    
    for(int i = 1; i <= V; i++) {
        int sz; cin >> sz;
        while(sz--) {
            int j; cin >> j;
            dsc.insert({min(i, j), max(i, j)});
            cnt[i]++;
        }
    }
    if(k == 1) {
        for(int i = 1; i <= V; i++) cout << cnt[i] << " ";
    }
    else {
        cout << V << " " << dsc.size() << endl;
        for(auto v : dsc) cout << v[0] << " " << v[1] << endl;
    }
}