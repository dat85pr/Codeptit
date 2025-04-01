#include <bits/stdc++.h>
using namespace std;
int n, i, a[100], x[15];
bool nt(int a){
	if(a < 2) return false;
	for(int i = 2; i <= sqrt(a); i++){
		if(a % i == 0) return false;
	}
	return true;
}
bool check(){
	int sum = 0;
	for(int i = 0; i < n; i++){
		if(x[i]){
			sum += a[i];
		}
	}
	if(nt(sum)) return true;
	else return false;
}
void ktao(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n, greater<int>());
}
void result(){
	for(int i = 0; i < n; i++){
		if(x[i]){
			cout << a[i] << " ";
		}
	}
	cout << endl;
}
void Try(int i){
	for(int j = 0; j <= 1; j++){
		x[i] = j;
		if(i == n - 1){
			if(check()){
				result();
			}
		}	
		else Try(i + 1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ktao();
		Try(0);	
	}
	return 0;
}
