#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n, q;
	cin >> n >> q;
	vector<ll> a(n), pos(n + 1);
	for(int i = 0; i < n; i++){
		cin >> a[i];
		pos[i + 1] = pos[i] + max(0LL, a[i]);
	}
	while(q--){
		ll l, r;
		cin >> l >> r;
		cout <<	pos[r] - pos[l - 1] << endl;
	}
	return 0;
}