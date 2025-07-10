#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#define MAX 100
int gt(int a){
	int tich = 1;
	int j = 1;
	while(j <= a){
		tich *= j;
		j++;
	}
	return tich;
}
int main() {
	int a;
	scanf("%d", &a);
	int tong = 0;
	int b = a;
	while(a > 0){
		int x = a % 10;
		a /= 10;
		tong += gt(x);
	}
	if(tong == b){
		printf("1");
	}
	else{
		printf("0");
	}
	return 0;
}

