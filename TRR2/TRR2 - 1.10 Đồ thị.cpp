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
            if(a[i][j] <= 50 && j >= i + 1) {
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
        for(pair<int, int> pi : dsc) {
            cout << pi.first << " " << pi.second << " " << a[pi.first][pi.second] << endl;
        }
    }
}