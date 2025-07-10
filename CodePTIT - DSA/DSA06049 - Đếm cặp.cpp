#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase() {
    int n, k;
    cin >> n >> k;
    int a[100000];
    ll dem = 0;
    for(int i = 0; i < n; i++){
    	cin >> a[i];
	}
	sort(a, a + n);
	for(int i = 0; i < n - 1; i++){
		dem += lower_bound(a + i + 1, a + n, a[i] + k) - (a + i + 1);
	}
	cout << dem << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
    return 0;
}
