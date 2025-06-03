#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int m, n, s, t;
vector<int> ke[1001];
bool visited[1001];
int before[1001];
void dfs(int u){
	visited[u] = true;
	for(int x : ke[u]){
		if(!visited[x]){
			before[x] = u;
			dfs(x);
		}
	}
}
void Path(int s, int t){
	memset(visited, false, sizeof(visited));
	memset(before, 0, sizeof(before));
	dfs(s);
	if(!visited[t]){
		cout << "-1" << endl;
	}
	else{
		vector<int> path;
		while(t != s){
			path.push_back(t);
			t = before[t];
		}
		path.push_back(s);
		reverse(path.begin(), path.end());
		for(auto x : path){
			cout << x << " ";
		}
	}
}
void testcase(){
	cin >> m >> n >> s >> t;
	for(int i = 0; i < n; i++){
		int u, v;
		cin >> u >> v;
		ke[u].push_back(v);
	}
	Path(s, t);
	cout << endl;
	for(int i = 1; i <= m; i++){
		ke[i].clear();
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
    return 0;
}
