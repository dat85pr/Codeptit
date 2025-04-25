#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, k;
const int mod = 1e9 + 7;
ll Mul(ll a, ll b){
	if(b == 0) return 0ll;
	ll tmp = Mul(a, b / 2);
	if(b % 2 == 1) return (tmp * 2 + a) % mod;
	return (tmp * 2) % mod; 
}
ll Pow(ll a, ll b){
	if(b == 0) return 1;
	if(b == 1) return a % mod;
	ll tmp = Pow(a, b / 2);
	ll h = Mul(tmp, tmp);
	if(b % 2 == 1) return (h * a) % mod;
	return h % mod;
}

int main() {
    int t; 
	cin >> t;
    while (t--) {
        cin >> n >> k;
        cout << Pow(n, k) << endl;
    }
    return 0;
}