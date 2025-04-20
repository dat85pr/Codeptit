#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		ll A = 0, B = 0;
		for(int i = 0; i < n; i++){
			if(i % 2 == 0){
				A = A * 10 + a[i];
			}
			else{
				B = B * 10 + a[i];
			}
		}
		cout << A + B << endl;
	}
	return 0;
}