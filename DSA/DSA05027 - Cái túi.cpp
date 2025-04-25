#include <bits/stdc++.h>
using namespace std;

void ktao(int a[], int c[], int n){
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		cin >> c[i];
	}
}

void qhd(int a[], int c[], int n, int v){
	vector<vector<int>> dp(n + 1, vector<int>(v + 1, 0));
	for(int i = 1; i <= n; i++){
		for(int j = 0; j <= v; j++){
			dp[i][j] = dp[i - 1][j]; 
			if(j >= a[i - 1]){
				dp[i][j] = max(dp[i][j], dp[i - 1][j - a[i - 1]] + c[i - 1]);
			}
		}
	}
	cout << dp[n][v] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, v;
		cin >> n >> v;
		int a[n], c[n];
		ktao(a, c, n);
		qhd(a, c, n, v);
	}
	return 0;
}
