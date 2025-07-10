#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char find(ll n , ll k){
	if(n == 1) return 'A';
	ll mid = pow(2, n - 1);
	if(k == mid) return 'A' + n - 1;
	if(k < mid) return find(n - 1, k);
	else return find(n - 1, k - mid);
}
void testcase(){
	ll n, k;
	cin >> n >> k;
	cout << find(n, k) << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
}