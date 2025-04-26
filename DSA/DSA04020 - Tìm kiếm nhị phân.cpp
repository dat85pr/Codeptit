#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {	
    int t; 
	cin >> t;
    while (t--) {
    	ll n, k;
    	cin >> n >> k;
    	ll a[n];
    	int dem = 0;
    	for(int i = 0; i < n; i++){
    		cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			if(k == a[i]){
				dem = i + 1;
			}
		}
		if(dem == 0){
			cout << "NO" << endl;
		}	
		else cout << dem << endl;
    }
    return 0;
}