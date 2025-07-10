#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		ll hs = 1e9 + 7;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		ll tong = 0;
		for(int i = 0; i < n; i++){
			tong = (tong + a[i] * i) % hs;
		}
		cout << tong << endl;
	}
	return 0;
}