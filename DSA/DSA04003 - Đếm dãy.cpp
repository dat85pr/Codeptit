#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 123456789;

ll Pow(ll a, ll b){
	if(b == 0) return 1;
	ll x = Pow(a, b / 2);
	if(b % 2 == 0) return (x * x) % mod;
	return (a * ((x * x) % mod)) % mod;
}

int main() {	
    int t; 
	cin >> t;
    while (t--) {
    	ll n;
        cin >> n;
        cout << Pow(2, n - 1) << endl;
    }
    return 0;
}