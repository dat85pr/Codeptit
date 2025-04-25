#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
	int n;
	cin >> n;
	vector<pair<int,int>> a;
	vector<int> S(n), F(n);
	for(int i = 0; i < n; i++){
		cin >> S[i];
		cin >> F[i];
	}
	for(int i = 0; i < n; i++){
		a.push_back({F[i], S[i]});
	}
	sort(a.begin(), a.end());
	int dem = 0, last = 0;
	for(auto x : a){
		int start = x.second;
		int end = x.first;
		if(start >= last){
			dem++;
			last = end;
		}
	}
	cout << dem << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
	return 0;
}
