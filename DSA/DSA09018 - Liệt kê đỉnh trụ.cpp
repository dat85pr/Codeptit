#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int m, n;
vector<int> ke[1001];
bool visited[1001];
void dfs(int u){
	visited[u] = true;
	for(auto x : ke[u]){
		if(!visited[x]){
			dfs(x);
		}
	}
}
void tru(){
	int dem = 0;
	memset(visited, false, sizeof(visited));
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			dem++;
			dfs(i);
		}
	}
	for(int i = 1; i <= n; i++){
		memset(visited, false, sizeof(visited));
		visited[i] = true;
		int ans = 0;
		for(int j = 1; j <= n; j++){
			if(!visited[j]){
				ans++;
				dfs(j);
			}
		}
		if(ans != dem){
			cout << i << " ";
		}
	}
	cout << endl;
}
void testcase(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int u, v;
		cin >> u >> v;
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
    tru();
	for(int i = 1; i <= n; i++){
		ke[i].clear();
	}	
}
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		testcase();
	}
    return 0;
}
