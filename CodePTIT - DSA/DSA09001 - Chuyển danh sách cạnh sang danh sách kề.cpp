#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
	int n, k;
	cin >> n >> k;
	vector<int> ke[k + 1];
	for(int i = 0; i < k; i++){
		int u, v;
		cin >> u >> v;
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	for(int i = 1; i <= n; i++){
		cout << i << ": ";
		for(auto x : ke[i]){
			cout << x << " ";
		}
		cout << endl;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
}