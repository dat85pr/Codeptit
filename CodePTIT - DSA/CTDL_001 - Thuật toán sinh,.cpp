#include<bits/stdc++.h>
using namespace std;
int a[100], n, ok;
void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}
void sinh(){
	int i = n;
	while( i >= 1 && a[i] == 1){
		a[i] = 0;
		--i;
	}
	if(i > 0){
		a[i] = 1;
	}
	else ok = 0;
}
bool check(int a[], int n){
	int l = 1, r = n;
	while(l <= r){
		if(a[l] != a[r]) return 0;
		l++, r--;
	}
	return 1;
}
int main(){
	cin >> n;
	ok = 1;
	ktao();
	while(ok == 1){
		if(check(a, n)){
			for(int i = 1; i <= n; i++){
				cout << a[i] << " ";
			}
			cout << endl;
		}
		sinh();
	}
	return 0;
}
