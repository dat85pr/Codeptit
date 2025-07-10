#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
	int n, m;
	cin >> n >> m;
	ll a[n], b[m];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}
	sort(a, a + n);
	sort(b, b + m);
	ll k = a[n - 1] * b[0];
	cout << k << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
	return 0;
}
