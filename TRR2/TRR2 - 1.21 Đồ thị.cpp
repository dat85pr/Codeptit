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
        for(int j = 1; j <= V; j++) {
            int x; cin >> x;
            if(x != 10000 && x != 0) {
                dsc.push_back({i, j, x});
                ra[i]++;
                vao[j]++;
            }
        }
    }

    if(k == 1) {
        for(int i = 1; i <= V; i++) cout << vao[i] << " " << ra[i] << endl;
    }
    else {
        cout << V << " " << dsc.size() << endl;
        for(vector<int> v : dsc) {
            cout << v[0] << " " << v[1] << " " << v[2] << endl;
        }
    }
}