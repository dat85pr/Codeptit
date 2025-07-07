#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#define MAX 100
bool pf(int a){
	int tong = 0;
	for(int i = 1; i <= a / 2 + 1; i++){
		if(a % i == 0){
			tong += i;
		}
	}
	if(tong == a){
		return true;
	}
	else return false;
}
int main() {
	int a;
	scanf("%d", &a);
	if(pf(a)){
		printf("1");
	}
	else{
		printf("0");
	}
	return 0;
}

