#include<bits/stdc++.h>
//sap xep tu be den lon
using namespace std;
typedef long long ll;
int main(){	
	int t;
	cin >> t;
	while(t--){
		int a[1000], n;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		set<int> se;
		for(int i = 0; i < n; i++){
			while(a[i] > 0){
				se.insert(a[i] % 10);
				a[i] /= 10;
			}
		}
		for(auto x : se){
			cout << x << " ";
		}
		cout << endl;
	}

	return 0;
}




