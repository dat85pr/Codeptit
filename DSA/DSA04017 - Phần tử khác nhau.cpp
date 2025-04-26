#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {	
    int t; 
	cin >> t;
    while (t--) {
    	ll n;
    	cin >> n;
    	ll a[n], b[n];
    	for(int i = 0; i < n; i++){
    		cin >> a[i];
		}
		for(int i = 0; i < n - 1; i++){
			cin >> b[i];
		}
		int dem = 0;
		while(a[dem] == b[dem]){
			dem++;
		}
		cout << dem + 1 << endl;
    }
    return 0;
}