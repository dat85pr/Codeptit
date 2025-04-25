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
    int k, V; cin >> k >> V;
    set<pair<int, int>> dsc;
    vector<int> cnt(V + 1, 0);
    vector<vector<int>> a(V + 1, vector<int>(V + 1));

    for(int i = 1; i <= V; i++) {
        for(int j = 1; j <= V; j++) {
            cin >> a[i][j];
            if(a[i][j] && j >= i + 1) {
                cnt[i]++;
                cnt[j]++;
                dsc.insert({min(i, j), max(i, j)});
            }
        }
    }
    if(k == 1) {
        for(int i = 1; i <= V; i++) cout << cnt[i] << " ";
    }
    else {
        cout << V << " " << dsc.size() << endl;
        for(int i = 1; i <= V; i++) {
            for(pair<int, int> tmp : dsc) {
                if(tmp.first == i || tmp.second == i) cout << "1 ";
                else cout << "0 ";
            }
            cout << endl;
        }
    }
}