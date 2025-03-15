#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void listPermutations(int N) {
    vector<int> perm(N);
    for (int i = 0; i < N; ++i) {
        perm[i] = N - i;
    }

    do {
        for (int i = 0; i < N; ++i) {
            cout << perm[i];
        }
        cout << " ";
    } while (prev_permutation(perm.begin(), perm.end()));
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        listPermutations(N);
        cout << endl;
    }
    return 0;
}
