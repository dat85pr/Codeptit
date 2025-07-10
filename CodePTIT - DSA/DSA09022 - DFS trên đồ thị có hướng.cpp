#include <bits/stdc++.h>
using namespace std;
int m, n, k;
vector<int> ke[1001];
bool visited[1001];

void dfs(int u){
	cout << u << " ";
	visited[u] = true;
	for(auto x : ke[u]){
		if(!visited[x]){
			dfs(x);
		}
	}
}

void testcase(){
	cin >> m >> n >> k;
	for(int i = 1; i <= m; i++){
		ke[i].clear();
	}
	memset(visited, false, sizeof(visited));
	for(int i = 1; i <= n; i++){
		int u, v;
		cin >> u >> v;
		ke[u].push_back(v);
	}
	for(int i = 1; i <= m; i++){
		sort(ke[i].begin(), ke[i].end());
	}
	dfs(k);
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