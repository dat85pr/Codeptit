#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int v[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
ll res;
void Try(int i, ll ans, ll uoc){
	if(uoc > n){
		return;
	}
	if(uoc == n){
		res = min(res, ans);
	}
	for(int j = 1;; j++){
		if(ans * v[i] > res){
			break;
		}
		ans *= v[i];
		Try(i + 1, ans, uoc * (j + 1);)
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		res = 1e18;
		Try(0, 1, 1);
		cout << res << endl;
	}
	return 0;
}
