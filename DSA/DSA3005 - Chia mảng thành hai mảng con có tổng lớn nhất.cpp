#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		ll a[n];
		k = min(k, n - k);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		ll x = 0, y = 0;
		for(int i = 0; i < k; i++){
			x += a[i];
		}
		for(int i = k; i < n; i++){
			y += a[i];
		}
		cout << y - x << endl;
	}
	return 0;
}