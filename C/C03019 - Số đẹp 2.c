#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;
bool tn(ll a){
	ll b = a;
	ll x = 0;
	while(a > 0){
		x = x * 10 + a % 10;
		a /= 10;
	}
	if(b == x) return true;
	return false;
}
bool kt(ll a){
	ll tong = 0;
	while(a > 0){
		tong += a % 10;
		a /= 10;
	}
	if(tong % 10 == 0) return true;
	return false;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int cnt = 0;
		int x = pow(10, n - 1);
		int y = pow(10, n);
		for(int i = x; i < y; i++){
			if(tn(i) && kt(i)) cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}





