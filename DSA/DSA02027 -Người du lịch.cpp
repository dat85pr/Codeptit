#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int chuaxet[100];
int n;
ll c[20][20];
ll x[100];
ll s = 0;
ll MIN = 10000000, cmin = 10000000;
void nhap(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> c[i][j];
			cmin = min(cmin, c[i][j]);
		}
	}
}
void Try(int i){
	if(s + cmin * (n - i + 1) >= MIN){
		return;
	}
	for(int j = 1; j <= n; j++){
		if(chuaxet[j]){
			x[i] = j;
			chuaxet[j] = 0;
			s += c[x[i - 1]][j];
			if(i == n){
				if(s + c[x[n]][x[1]] < MIN){
					MIN = s + c[x[n]][x[1]];
				}
			}
			else{
				Try(i + 1);
			}
			s -= c[x[i -1]][j];
			chuaxet[j] = 1;
		}
	}
}
int main(){
	memset(chuaxet, 1, sizeof(chuaxet));
    chuaxet[1] = 0;
	x[1] = 1;
	nhap();
	Try(2);
	cout << MIN;
	return 0;
}