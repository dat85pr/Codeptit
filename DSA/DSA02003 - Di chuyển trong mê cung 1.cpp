#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, a[100][100];
vector<string> res;
bool check = false;
void ktao(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	res.clear();
	check = false;
}
void result(){
	sort(res.begin(), res.end());
	for(int i = 0; i < res.size(); i++){
		cout << res[i] << " ";
	}
	cout << endl;
}
void Try(int i, int j, string s){
	if(i == 1 && j == 1 && a[i][j] == 0){
		check = false;
		return;
	}
	if(i == n && j == n && a[i][j] == 1){
		check = true;
		res.push_back(s);
		return;
	}
	if(i < n && a[i + 1][j]){
		Try(i + 1, j, s + "D");
	}
	if(j < n && a[i][j + 1]){
		Try(i, j + 1, s + "R");
	}
	if(i < n && j < n && !a[i + 1][j] && a[i][j + 1] || i > n || j > n){
		return;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ktao();
		Try(1, 1, "");
		if(!check){
			cout << "-1" << endl;
		}
		else{
			result();
		}
	}
	return 0;
}
