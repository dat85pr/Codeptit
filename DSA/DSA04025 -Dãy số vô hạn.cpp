#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
void mulmatrix(vector<vector<ll>> &mt1, vector<vector<ll>> &mt2){
	ll x = mt1[0][0] * mt2[0][0] + mt1[0][1] * mt2[1][0];
	ll y = mt1[0][0] * mt2[0][1] + mt1[0][1] * mt2[1][1];
	ll z = mt1[1][0] * mt2[0][0] + mt1[1][1] * mt2[1][0];
	ll t = mt1[1][0] * mt2[0][1] + mt1[1][1] * mt2[1][1];
	mt1[0][0] = x % MOD;
	mt1[0][1] = y % MOD;
	mt1[1][0] = z % MOD;
	mt1[1][1] = t % MOD;
}
void matrixexp(vector<vector<ll>> & mt1, ll n){
	if(n <= 1) return;
	vector<vector<ll>> mt2 = {{1, 1}, {1, 0}};
	matrixexp(mt1, n / 2);
	mulmatrix(mt1, mt1);
	if(n % 2 != 0){
		mulmatrix(mt1, mt2);
	}
}
ll fb(int n){
	if(n <= 1) return n;
	vector<vector<ll>> mt1 = {{1, 1}, {1, 0}};
	matrixexp(mt1, n - 1);
	return mt1[0][0];
}
void testcase(){
	int n;
	cin >> n;
	cout << fb(n) << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
}