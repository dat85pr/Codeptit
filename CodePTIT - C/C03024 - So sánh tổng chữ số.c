#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>

int tong(int a){
	int tong = 0;
	while(a > 0){
		tong += a % 10;
		a /= 10;
	}
	return tong;
}
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if(tong(a) > tong(b)){
		printf("%d %d", b, a);
	}
	else{
		printf("%d %d", a, b);
	}
}


