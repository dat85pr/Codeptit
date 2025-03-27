#include <bits/stdc++.h>

using namespace std;
int n, a[10000];
bool ok = true;
void ktao(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}
void result(){
	for(int i = 1; i <= n; i++){
		if(a[i] == 0){
			cout << "A";
		}
		else cout << "B";
	}
	cout << " ";
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
		cout << endl;
	}
	return 0;
}
