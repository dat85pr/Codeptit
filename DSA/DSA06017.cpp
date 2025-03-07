#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
	int n, m;
	cin >> n >> m;
	int k = n + m;
	int a[k];
	for(int i = 0; i < k; i++){
		cin >> a[i];
	}
	sort(a, a + k);
	for(auto x : a){
		cout << x << " ";
	}
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
