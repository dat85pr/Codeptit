#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
long long tn(long long a){
	long long b = a;
	long long x = 0;
	while(a > 0){
		x = x * 10 + a % 10;
		a /= 10;
	}
	if(b == x) return true;
	return false;
}
bool kt(long long a){
	long long tong = 0, y;
	while(a > 0){
		y = a % 10;
		tong += y;
		a /= 10;
		if(y % 2 == 0) return false;
	}
	if(tong % 2 == 0) return false;
	return true;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		long long a;
		scanf("%lld", &a);
		if(tn(a) && kt(a)){
			printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
}


