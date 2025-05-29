#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
ll Min(ll a[], ll b[]){
	sort(a, a + n);
	sort(b, b + n, greater<ll>());
	ll sum = 0;
	for(int i = 0; i < n; i++){
		sum += a[i] * b[i];
	}
	return sum;
}
void testcase(){
	cin >> n;
	ll a[n + 1], b[n + 1];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}
	ll sum = min(Min(a, b), Min(b, a));
	cout << sum << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
}