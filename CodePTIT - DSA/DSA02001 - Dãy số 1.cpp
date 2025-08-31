#include <bits/stdc++.h>
using namespace std; 
void Try(int a[], int n){
	if(n < 1) return; 
  	int tmp[n]; 
  	for(int i = 0; i < n - 1; i++){
  		tmp[i] = a[i] + a[i + 1];
	}
   	cout << "[" << a[0];
    for(int i = 1; i < n; i++){
    	cout << " " << a[i]; 
	}
	cout << "]\n"; 
	Try(tmp, n - 1); 
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
	} 
	return 0;
}
