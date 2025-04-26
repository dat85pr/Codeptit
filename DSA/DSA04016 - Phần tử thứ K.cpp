#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {	
    int t; 
	cin >> t;
    while (t--) {
    	ll m, n , k;
    	cin >> m >> n >> k;
    	ll a[m + n];
    	for(int i = 0; i < n + m; i++){
    		cin >> a[i];
		}
    	sort(a, a + n + m);
		cout << a[k - 1] << endl;
    }
    return 0;
}