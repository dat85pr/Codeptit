#include <bits/stdc++.h>

using namespace std;
int n, k, a[10000], b[10000];
bool ok = true;
void ktao(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}
void result(){
	int dem = 0;
	for(int i = 1; i <= n; i++){
		b[i] = a[i];
		if(a[i] == 1){
			dem++;
		}
	}
	if(dem == k){
		for(int i = 1; i <= n; i++){
			cout << b[i];
		}
		cout << endl;
	}
}
void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i > 0){
		a[i] = 1;
	}
	else{
		ok = false;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ktao();
		while(ok){
			result();
			sinh();
		}
		ok = true;
	}
	return 0;
}
