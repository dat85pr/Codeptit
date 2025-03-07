#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n - k + 1; i++){
		int max = INT_MIN;
		for(int j = i; j <= i + k - 1; j++){
			if(a[j] > max){
				max = a[j];
			}
		}
		cout << max << " ";
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
	return 0;
}
