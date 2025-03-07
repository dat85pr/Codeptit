#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
	int n;
	cin >> n;
	vector<int> a(n);
	int sum = 0;
	for (int &i : a){
		cin >> i; 
		sum += i;
	} 
	int l = 0, r = sum;
	for(int i = 0; i < n; i++){ 
		r -= a[i]; 
		if (l == r){
			cout << i + 1 << endl;;
			return; 
		} 
		l += a[i];
	} 
	cout << "-1" << endl;
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
	return 0;
}
