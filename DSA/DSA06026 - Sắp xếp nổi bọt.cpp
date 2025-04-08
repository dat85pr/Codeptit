#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    for (int i = 1; i < n; ++i) {
        bool is_sorted = true;
        for (int j = 0; j < n - i; ++j) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                is_sorted = false;
            }
        }
        if (is_sorted) break;
        cout << "Buoc " + to_string(i) + ": ";
        for (int j = 0; j < n; ++j) {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}

int main() {

        testCase();
        cout << "\n";

    return 0;
}
