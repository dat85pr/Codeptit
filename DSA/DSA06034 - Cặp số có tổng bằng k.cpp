#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void testcase(){
	int n, k;
	cin >> n >> k;
	map<int, int> mp;
	int a;
	ll cnt = 0;
	while(n--){
		cin >> a;
		cnt += mp[k - a];
		mp[a]++;
	}
	cout << cnt << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
    return 0;
}
