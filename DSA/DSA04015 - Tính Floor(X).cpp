#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {	
    int t; 
	cin >> t;
    while (t--) {
    	ll n, x;
    	cin >> n >> x;
    	ll a[n];
    	for(int i = 0; i < n; i++){
    		cin >> a[i];
		}
		int ok = 0, j = 0;
		while(a[j] <= x){
			ok = 1;
			j++;
		}
		if(ok == 0){
			cout << "-1" << endl;
		}
		else cout << j << endl;
    }
    return 0;
}