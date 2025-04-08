#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase() {
    int n;
    cin >> n;
    ll a[n];
    ll b[n];
    for(int i = 0; i < n; i++){
    	cin >> a[i];
    	b[i] = a[i];
	}
	sort(a, a + n);
	if(a[0] == b[0]){
		cout << "0" << endl;
		return;
	}
	for(int i = 0; i < n; i++){
		if(b[0] == a[i]){
			int x = n - i;
			cout << x << endl;
			return;
		}
	}
}
int main() {
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
    return 0;
}
