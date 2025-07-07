#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>

bool kt(int a){
	int tong = 0;
	while(a > 0){
		tong += a % 10;
		a /= 10;
	}
	if(tong % 10 == 0) return true;
	else return false;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int a;
		scanf("%d", &a);
		if(kt(a)){
			printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
}


