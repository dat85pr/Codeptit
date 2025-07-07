#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;
int tn(int a){
	int b = a;
	int x = 0;
	while(a > 0){
		int y = a % 10;
		if(y == 4) return false;
		x = x * 10 + y;
		a /= 10;
	}
	if(x == b) return true;
	return false;
}
bool tcs(int a){
	int tong = 0;
	while(a > 0){
		tong += a % 10;
		a /= 10;
	}
	if(tong % 10 == 0) return true;
	return false;
}
bool kt(int a){
	if(tcs(a) && tn(a)) return true;
	return false;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int x = pow(10, n - 1);
		int y = pow(10, n);
		for(int i = x; i < y; i++){
			if(kt(i)) printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}



