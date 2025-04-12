#include <bits/stdc++.h>
using namespace std;

int n, dem;
int c[20], xuoi[20], nguoc[20];

void Try(int i) {
    for (int j = 1; j <= n; ++j) {
        if (!c[j] && !xuoi[i + j - 1] && !nguoc[i - j + n]) {
            c[j] = xuoi[i + j - 1] = nguoc[i - j + n] = 1;
            if (i == n) dem++;
            else Try(i + 1);
            c[j] = xuoi[i + j - 1] = nguoc[i - j + n] = 0;
        }
    }
}


int main() {
    int t;
	cin >> t;
    while (t--) {
        cin >> n;
    	dem = 0;
		Try(1);
    	cout << dem << endl;
    }
    return 0;
}
