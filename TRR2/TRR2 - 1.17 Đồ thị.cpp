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
    
    unordered_map<int, int> vao, ra;
    vector<vector<int>> dsc;

    for(int i = 1; i <= E; i++) {
        int x, y; cin >> x >> y;
        ra[x]++;
        vao[y]++;
        dsc.push_back({x, y});
    }

    if(k == 1) {
        for(int i = 1; i <= V; i++) cout << vao[i] << " " << ra[i] << endl;
    }
    else {
        cout << V << " " << dsc.size() << endl;
        for(int i = 1; i <= V; i++) {
            for(vector<int> v : dsc) {
                if(v[0] == i) cout << "1 ";
                else if(v[1] == i) cout << "-1 ";
                else cout << "0 ";
            }
            cout << endl;
        }
    }
}