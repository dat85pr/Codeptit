#include<bits/stdc++.h>

using namespace std;

int kt(int N, const vector<int>& a) {
    vector<int> v(N + 1, 1);
    for (int i = 2; i <= N; ++i) {
        v[i] = v[i - 1] * i;
    }

    vector<int> b(N);
    for (int i = 0; i < N; ++i) {
        b[i] = i + 1;
    }

    int dem = 1;
    for (int i = 0; i < N; ++i) {
        int pos = find(b.begin(), b.end(), a[i]) - b.begin();
        dem += pos * v[N - i - 1];
        b.erase(b.begin() + pos);
    }

    return dem;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> a(N);
        for (int i = 0; i < N; ++i) {
            cin >> a[i];
        }
        cout << kt(N, a) << endl;
    }
    return 0;
}
