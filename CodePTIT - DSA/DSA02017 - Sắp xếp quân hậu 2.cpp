#include <bits/stdc++.h>
using namespace std;
int a[11][11], b[100];
bool xuoi[22], nguoc[22], h[11], c[11];
int res;
int n;
void ktao(){
	n = 8;
	for(int i = 1; i <= 8; i++){
		for(int j = 1; j <= 8; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= 8; i++){
		h[i] = c[i] = false;
	}
	for(int i = 1; i <= 22; i++){
		xuoi[i] = nguoc[i] = false;
	}
	res = 0;
}
void Try(int i){
	for(int j = 1; j <= n; j++){
		if(!h[j] && !c[j] && !nguoc[i + j - 1] && !xuoi[i - j + n]){
			b[i] = j;
			h[j] = c[j] = nguoc[i + j - 1] = xuoi[i - j + n] = true;
			if(i == n){
				int tong = 0;
				for(int l = 1; l <= 8; l++){
					tong += a[l][b[l]];
				}
				res = max(res, tong);
			}
			else{
				Try(i + 1);
			}
			h[j] = c[j] = xuoi[i - j + n] = nguoc[i + j - 1] = false;
		
		}
		
		
	}
}
int main() {
	int t;
    cin >> t;
    while(t--){
    	ktao();
    	Try(1);
    	cout << res << endl;
    }
    return 0;
}
