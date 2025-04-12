#include<bits/stdc++.h>
using namespace std;
int n, m, a[100][100];
int dem;
void ktao(){
	cin >> m >> n;
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	dem = 0;
}
void result(){
	cout << dem;
	cout << endl;
}
void Try(int i, int j){
	if(i == m && j == n){
		dem++;
		return;
	}
	if(i < m){
		Try(i + 1, j);
	}
	if(j < n){
		Try(i, j + 1);
	}
	if(i > m || j > n){
		return;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ktao();
		Try(1, 1);
		result();
	}
	return 0;
}
