#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main(){ 
	int n;
	cin  >> n;
	ll a[10000];
	for(int i = 0; i <n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	 cout << max({a[0] * a[1], a[n - 1] * a[n - 2], a[0] * a[1] * a[n - 1], a[n - 1] * a[n - 2] * a[n - 3]});
}