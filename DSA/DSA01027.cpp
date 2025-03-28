#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    do {
        for (int i = 0; i < N; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    } while (next_permutation(A.begin(), A.end()));

    return 0;
}
