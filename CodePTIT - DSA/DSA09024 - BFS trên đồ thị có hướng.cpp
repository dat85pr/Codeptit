#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int m, n, k;
vector<int> ke[10001];
bool visited[10001];
void BFS(int u){
	cout << u << " ";
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(int x : ke[v]){
			if(!visited[x]){
				q.push(x);
				cout << x << " ";
				visited[x] = true;
			}
		}
	}
}
void testcase(){
	cin >> m >> n >> k;
	for(int i = 0; i < n; i++){
		int u, v;
		cin >> u >> v;
		ke[u].push_back(v);
	}
	memset(visited, false, sizeof(visited));
	BFS(k);
	cout << endl;
	for(int i = 1; i <= m; i++){
		ke[i].clear();
	}
}
int main(){
    int t;
    cin >> t;
    while (t--){
    	testcase();
    }
    return 0;
}
