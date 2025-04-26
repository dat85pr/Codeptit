#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, k;
const int mod = 1e9 + 7;
ll Pow(ll a, ll b){
	if(b == 0) return 1;
	if(b == 1) return a % mod;
	ll x = Pow(a, b / 2);
	if(b % 2 == 0) return x * x % mod;
	return n * (x * x % mod) % mod;
}
void testcase(){
	while(1){
        cin >> n >> k;
        if(k == 0 && n == 0){
        	return;
		}
        cout << Pow(n, k) << endl;
    }
}
int main() {
    testcase();
    return 0;
}
