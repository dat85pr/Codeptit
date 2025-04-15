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
    vector<vector<int>> a(V + 1, vector<int>(V + 1, 0));

    for(int i = 1; i <= V; i++) {
        int sz; cin >> sz;
        while(sz--) {
            int j; cin >> j;
            a[i][j] = 1;
            ra[i]++;
            vao[j]++;
        }
    }

    if(k == 1) {
        for(int i = 1; i <= V; i++) cout << vao[i] << " " << ra[i] << endl;
    }
    else {
        cout << V << endl;
        for(int i = 1; i <= V; i++) {
            for(int j = 1; j <= V; j++) cout << a[i][j] << " ";
            cout << endl;
        }
    }
}