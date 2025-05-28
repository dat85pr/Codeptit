#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void testcase(){
	ll n, m , p;
	cin >> n >> m >>p;
	vector<int> a(n), b(m), c(p);
	for(auto &x : a) cin >> x;
	for(auto &x : b) cin >> x;
	for(auto &x : c) cin >> x;
	vector<int> ans;
	int i = 0, j = 0, k = 0;
	while(i < n && j < m && k < p){
		if(a[i] == b[j] && a[i] == c[k]){
			ans.push_back(a[i]);
		}
		if(a[i] < b[j]){
			i++;
		}
		else if(b[j] < c[k]){
			j++;
		}
		else k++;
	}
	if(ans.empty()){
		cout << "-1" << endl;
	}
	else{
		for(auto x : ans){
			cout << x << " ";
		}
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
}