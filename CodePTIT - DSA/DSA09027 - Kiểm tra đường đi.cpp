#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int m, n, s, t, q;
vector<int> ke[1001];
bool visited[1001];
int before[1001];
void bfs(int u){
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()){
		int v = q.front(); q.pop();
		for(int x : ke[v]){
			if(!visited[x]){
				q.push(x);
				before[x] = v;
				visited[x] = true;
			}
		}
	}
}
void Path(int s, int t){
	memset(visited, false, sizeof(visited));
	memset(before, 0, sizeof(before));
	bfs(s);
	if(!visited[t]){
		cout << "NO";
	}
	else{
		cout << "YES";
	}
}
void testcase(){
	cin >> m >> n;
	for(int i = 0; i < n; i++){
		int u, v;
		cin >> u >> v;
		ke[u].push_back(v);
		ke[v].push_back(u); 
	}
	cin >> q;
	while(q--){
		cin >> s >> t;
		Path(s, t);
		cout << endl;	
	}
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
