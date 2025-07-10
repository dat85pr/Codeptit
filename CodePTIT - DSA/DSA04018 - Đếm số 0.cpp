#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {	
    int t; 
	cin >> t;
    while (t--) {
    	ll n;
    	cin >> n;
    	ll a[n];
    	int dem = 0;
    	for(int i = 0; i < n; i++){
    		cin >> a[i];
    		if(a[i] == 1){
    			dem++;
			}
		}
		cout << n - dem << endl;
		
    }
    return 0;
}