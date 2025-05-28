#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void testcase(){
	int n, k;
	cin >> n >> k;
	int a[n + 1];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	for(int i = 0; i < n - 2; i++){
		int l = i + 1, r = n - 1;
		while(l < r){
			int sum = a[i] + a[l] + a[r];
			if(sum == k){
				cout << "YES" << endl;
				return;
			}
			else if(sum < k){
				l++;
			}
			else r--;
		}
	}
	cout << "NO" << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
}