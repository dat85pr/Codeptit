#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>

int gt(int a){
	int tich = 1;
	int j = 1;
	while(j <= a){
		tich *= j;
		j++;
	}
	return tich;
}
bool kt(int a){
	int tong = 0;
	int b = a;
	while(a > 0){
		int x = a % 10;
		a /= 10;
		tong += gt(x);
	}
	if(tong == b) return true;
	else return false;
}
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if(a > b){
		for(int i = b; i <= a; i++){
			if(kt(i)){
				printf("%d ", i);
			}
		}
	}
	else{
		for(int i = a; i <= b; i++){
			if(kt(i)){
				printf("%d ", i);
			}
		}
	}
	return 0;
}


