#include <bits/stdc++.h>
using namespace std;
#define MAX 1001
int a[MAX][MAX];
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
			a[i][u] = 1;
			a[u][i] = 1;
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
}
int main(){
   	testcase();
    return 0;
}