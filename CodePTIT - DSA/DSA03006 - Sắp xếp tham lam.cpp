#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
	int n;
	cin >> n;
	int a[10000], b[10000];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b + n);
	for(int i = 0; i < n; i++){
		if(a[i] + a[n - i - 1] != b[0] + b[n - 1]){
			cout << "No" << endl;
			return;
		}
	}
	cout << "Yes" << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
	return 0;
}
