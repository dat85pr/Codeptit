#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int kadane(int a[], int n){
	int tongdau = 0, tongcuoi = 0;
	for(int i = 0; i < n; i++){
		tongdau += a[i];
		if(tongdau <= 0){
			tongdau = 0;
		}
		if(tongcuoi < tongdau){
			tongcuoi = tongdau;
		}
	}
	return tongcuoi;
}
int main() {	
    int t; 
	cin >> t;
    while (t--) {
    	int n;
    	cin >> n;
    	int a[102];
    	for(int i = 0; i < n; i++){
    		cin >> a[i];
		}
		cout << kadane(a, n) << endl;
    }
    return 0;
}