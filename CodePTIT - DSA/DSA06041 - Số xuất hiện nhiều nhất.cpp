#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
	int n;
	cin >> n;
	int a[n];
	int dd[10000001] = {0};
	for(int i = 0; i < n; i++){
		cin >> a[i];
		dd[a[i]]++;
	}
	for(auto x : a){
		if(dd[x] > n / 2){
			cout << x << endl;
			return;
		}
	}
	cout << "NO" << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
	return 0;
}
