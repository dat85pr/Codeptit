#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int m, n, k;
vector<int> ke[1001];
bool visited[1001];

void DFS(int u){
    visited[u] = true;
	cout << u << " ";
	for(auto x : ke[u]){
		if(!visited[x]){
			DFS(x);
		}
	}
}
void testcase(){
	cin >> m >> n >> k;
	memset(visited, false, sizeof(visited));
	for(int i = 1 ; i <= m; i++){
	    ke[i].clear();
	}
	for(int i = 0; i < n; i++){
		int u, v;
		cin >> u >> v;
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	for(int i = 1; i <= m; i++)
	  sort(ke[i].begin(), ke[i].end());
	DFS(k);
}
int main(){
    int t;
    cin >> t;
    while (t--){
    	testcase();
    	cout << endl;
    }
    return 0;
}