#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[101][101];
int n;
void testcase(){
	cin >> n;
	cin.ignore();
	for(int i = 1; i <= n; i++){
		string s;
		getline(cin, s);
		stringstream ss(s);
		int u;
		while(ss >> u){
			a[u][i] = 1;
			a[i][u] = 1;
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = i + 1; j <= n; j++){
			if(a[i][j] == 1){
				cout << i << " " << j << endl;
			}
		}
	}
}
int main(){
	testcase();
}