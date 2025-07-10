#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k, dem = 1;
		cin >> n >> k;
		vector<int> x(k), tmp(k);
		iota(x.begin(), x.end(), 1);
		for(auto &a : tmp) cin >> a;
		while(x != tmp){
			dem++;
			int i = k - 1;
			while(i >= 0 && x[i] == (n - k + i + 1)){
				i--;
			}
			if(i < 0){
				break;
			}
			else{
				x[i]++;
				for(int j = i + 1; j < k; j++){
					x[j] = x[j - 1] + 1;
				}
			}
		}
		cout << dem << endl;
	}
}