#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fb[94];
void prepare(){
	fb[1] = 1; fb[2] = 1;
	for(int i = 3; i < 93; i++){
		fb[i] = fb[i - 2] + fb[i - 1];
	}
}
char find(ll n , ll k){
	if(n == 1) return '0';
	if(n == 2) return '1';
	if(k <= fb[n - 2]) return find(n - 2, k);
	else return find(n - 1, k - fb[n - 2]);
}
void testcase(){
	ll n, k;
	cin >> n >> k;
	cout << find(n, k) << endl;
}
int main(){
	int t;
	cin >> t;
	prepare();
	while(t--){
		testcase();
	}
}