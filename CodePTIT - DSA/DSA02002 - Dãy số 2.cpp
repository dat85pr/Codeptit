#include <bits/stdc++.h> 
using namespace std;
void Try(int a[], int n){
	if(n < 1) return; 
	int t[n];
	for(int i = 0; i < n - 1; i++){
		t[i] = a[i] + a[i + 1];
	} 
	Try(t, n - 1); 
	cout << "[" << a[0]; 
	for(int i = 1; i < n; i++){
		cout << " " << a[i];
	} 
	cout << "] "; 
} 
int main(){
	int t; 
	cin >> t; 
	while(t--){ 
		int n; 
		cin >> n; 
		int a[n]; 
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		Try(a, n); 
		cout << "\n"; 
	} 
	return 0; 
}
