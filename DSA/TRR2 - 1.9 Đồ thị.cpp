#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <fstream>
using namespace std;

int main() {
    //fstream cin("DT.INP", ios::in);
    //fstream cout("DT.OUT", ios::out);
    int k, V; cin >> k >> V;
    set<pair<int, int>> dsc;
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
        for(int i = 1; i <= V; i++) {
            for(pair<int, int> v : dsc) {
                if(v.first == i || v.second == i) cout << "1 ";
                else cout << "0 ";
            }
            cout << endl;
        }
    }
}