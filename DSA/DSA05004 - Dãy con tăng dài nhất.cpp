#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	vector<int> L(n, 1);
	// L[i] : do dai day con tang dai nhat ket thuc o chi so i
	//L[i] = max(L[i], l[j] + 1)
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i; j++){
			if(a[i] > a[j]){
				L[i] = max(L[i], L[j] + 1);
			}
		}
	}
	cout << *max_element(L.begin(), L.end());
    return 0;
}