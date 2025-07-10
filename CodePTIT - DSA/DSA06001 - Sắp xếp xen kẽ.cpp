#include<bits/stdc++.h>
//sap xep tu be den lon
using namespace std;
typedef long long ll;
void selectionSort(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		int min_pos = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min_pos]){
				min_pos = j;
			}
		}
		swap(a[i], a[min_pos]);
	}
}
int main(){	
	int t;
	cin >> t;
	while(t--){
		int a[1000], n;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		selectionSort(a, n);
		for(int i = 0; i < n; i++){
			if(i % 2 == 0){
				cout << a[n - 1 - i / 2] << " ";
			}
			else cout << a[i - (i - 1) / 2 - 1] << " ";
		}
		cout << endl;
	}
	return 0;
}
