#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {	
    int t; 
	cin >> t;
    while (t--) {
    	ll n, k;
    	cin >> n >> k;
    	int cnt = 1;
    	while(k % 2 != 1){
    		++cnt;
    		k /= 2;
		}
		cout << cnt << endl;
    }
    return 0;
}