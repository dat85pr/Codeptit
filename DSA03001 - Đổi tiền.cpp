#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;

int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		int dem = 0;
		for(int i = 0; i <= 9; i++){
			while(n >= a[i]){
				n -= a[i];
				dem++;
			}
		}
		cout << dem << endl;
	}
	return 0;
}