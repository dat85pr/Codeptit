#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#define MAX 100

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int tong = 0;
	if(a > b){
		for(int i = b; i <= a; i++){
			tong += i;
		}
	}
	else {
		for(int i = a; i <= b; i++){
			tong += i;
		}
	}
	printf("%d", tong);
	return 0;
}

