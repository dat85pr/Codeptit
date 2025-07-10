#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
const int mod = 1e9 + 7;

ll Pow(ll a, ll b){
	if(b == 0) return 1;
	if(b == 1) return a % mod;
	ll x = Pow(a, b / 2);
	if(b % 2 == 0) return x * x % mod;
	return n * (x * x % mod) % mod;
}
ll dao(ll x){
	ll a = 0;
	while(x > 0){
		a = a * 10 + x % 10;
		x /= 10;
	}
	return a;
}
int main() {
    int t; 
	cin >> t;
    while (t--) {
        cin >> n;
        cout << Pow(n, dao(n)) << endl;
    }
    return 0;
}