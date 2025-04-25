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
    
    unordered_map<int, int> vao, ra;
    vector<vector<int>> dsc;

    for(int i = 1; i <= V; i++) {
        int sz; cin >> sz;
        while(sz--) {
            int j; cin >> j;
            dsc.push_back({i, j});
            ra[i]++;
            vao[j]++;
        }
    }

    if(k == 1) {
        for(int i = 1; i <= V; i++) cout << vao[i] << " " << ra[i] << endl;
    }
    else {
        cout << V << " " << dsc.size() << endl;
        for(vector<int> v : dsc) cout << v[0] << " " << v[1] << endl;
    }
}