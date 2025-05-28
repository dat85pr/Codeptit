#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(pair<int, int> &a, pair<int, int> &b){
	if(a.second == b.second) return a.first < b.first;
	else return a.second > b.second;
}
void testcase(){
	int n;
	cin >> n;
	map<int, int> mp;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		mp[x]++;
	}
	vector<pair<int, int>> a(mp.begin(), mp.end());
	sort(a.begin(), a.end(), check);
	for(int i = 0; i < a.size(); i++){
		while(a[i].second > 0){
			cout << a[i].first << " ";
			a[i].second--;
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