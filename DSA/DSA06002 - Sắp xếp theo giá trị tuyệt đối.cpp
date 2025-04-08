#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, x;
bool cmp(int a, int b){
	return abs(x - a) < abs(x - b);
}
void testcase(){
	cin >> n >> x;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	stable_sort(a, a + n, cmp);
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
