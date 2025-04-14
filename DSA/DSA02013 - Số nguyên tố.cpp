#include <bits/stdc++.h>
using namespace std;
int n, p, s, vt;
bool ok[300];
vector<vector<int>> res;
vector<int> a;
void Sang(){
	for(int i = 2; i <= 200; i++){
		if(!ok[i]){
			a.push_back(i);
			for(int j = i * i; j <= 200; j += i){
				ok[j] = true;
			}
		}
	}
}
void ktao(){
	cin >> n >> p >> s;
	vt = lower_bound(a.begin(), a.end(), p) - a.begin();
	for(int i = 0; i < 300; i++){
		ok[i] = false;
	}
	res.clear();
}
void Res(){
	cout << res.size() << endl;
	for(int i = 0; i < res.size(); i++){
		for(int j = 0; j < res[i].size(); j++){
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
}
void Try(int i, vector<int> v, int sum){
	if(sum > s){
		return;
	}
	if(sum == s && v.size() == n){
		res.push_back(v);
		return;
	}
	for(int j = i; j < a.size(); j++){
		if(ok[j] == false && sum + a[j] <= s && v.size() < n){
			v.push_back(a[j]);
			ok[j] = true;
			Try(j + 1, v, sum + a[j]);
			v.pop_back();
			ok[j] = false;
		}
	}
}
int main() {
	Sang();
	int t;
    cin >> t;
    while(t--){
    	ktao();
    	vector<int> v; 
		v.clear();
    	Try(vt, v, 0);
    	Res();
    }
    return 0;
}

