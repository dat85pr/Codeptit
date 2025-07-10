#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--){
		int n, S;
		cin >> n >> S;
		vector<int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		vector<bool> dp(S + 1, false);
		dp[0] = true;
		for(int i = 0; i < n; i++){
			for(int j = S; j >= a[i]; j--){
				if(dp[j - a[i]] == true){
					dp[j] = true;
				}
			}
		}
		if(dp[S] == true){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}