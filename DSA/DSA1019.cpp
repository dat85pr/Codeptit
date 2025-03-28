#include <bits/stdc++.h>

using namespace std;
void kt(string s, int n, vector<string>& result) {
    if (s.length() == n) { 
        if (s[0] == 'H' && s[n-1] == 'A') { 
            result.push_back(s);
        }
        return;
    }
    kt(s + "A", n, result);
    if (s.empty() || s.back() != 'H') {
       	kt(s + "H", n, result);
    }
}

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> v;
        kt("", n, v);
        sort(v.begin(), v.end());
        for (const string& s : v) {
            cout << s << endl;
        }
    }

    return 0;
}
