#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int m, n;
vector<string> a;
const int X[4] = {1, -1, 0, 0};
const int Y[4] = {0, 0, 1, -1};
void bfs(int i, int j){
	a[i][j] = '.';
	for(int k = 0; k < 4; k++){
		int x = i + X[k];
		int y = j + Y[k];
		while(x >= 0 && x < n && y >= 0 && y < m && a[x][y] == '#'){
			bfs(x, y);
		}
	}
}
void testcase(){
	cin >> n >> m;
	a.resize(n);
	int cnt = 0;
	for(auto &x : a) cin >> x;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == '#'){
				cnt++;
				bfs(i, j);
			}
		}
	}
	cout << cnt << endl;
}
int main(){
    testcase();
    return 0;
}
