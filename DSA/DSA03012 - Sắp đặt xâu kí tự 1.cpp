#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    int dd[127] = {};
    int maxx = 0;
    for (char i : s) {
        dd[i]++;
        maxx = max(maxx, dd[i]);
    }
    if (maxx <= (s.length() + 1) / 2) cout << 1;
    else cout << -1;
}

int main() {
    int t; cin >> t;
    while (t--) {
        testCase();
        cout << "\n";
    }
    return 0;
}