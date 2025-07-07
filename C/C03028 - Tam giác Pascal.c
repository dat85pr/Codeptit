#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;
int gt(int a){
	int tich = 1;
	for(int i = 1; i <= a; i++){
		tich *= i;
	}
	return tich;
}
int pascal(int n, int k){
	int x = gt(k) * gt(n - k);
	return gt(n) / x;
}
int main() {
	int a;
	scanf("%d", &a);
	for(int i = 0; i < a; i++){
		for(int j = 0; j <= i; j++){
			printf("%d ", pascal(i, j));
		}
		printf("\n");
	}
	return 0;
}





