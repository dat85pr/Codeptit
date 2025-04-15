#include <iostream>
#include <vector>
#include <set>
#include <fstream>
using namespace std;

int main() {
    fstream cin("DT.INP", ios::in);
    fstream cout("DT.OUT", ios::out);
    int k, V; cin >> k >> V;

    vector<vector<int>> a(V + 1, vector<int>(V + 1));
    vector<int> cnt(V + 1, 0);
    vector<set<int>> dske(V + 1); 
    
    for(int i = 1; i <= V; i++) {
        for(int j = 1; j <= V; j++) {
            cin >> a[i][j];
            if(a[i][j] && j >= i + 1) {
                dske[i].insert(j);
                dske[j].insert(i);
                cnt[i]++;
                cnt[j]++;
            }
        }
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