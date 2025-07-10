#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#define MAX 100

int main() {
	int a;
	scanf("%d", &a);
	long long tong = 0;
	for(int i = 1; i <= a; i++){
		int j = 1;
		long long tich = 1;
		while(j <= i){
			tich *= j;
			j++;
		}
		tong += tich;
	}
	printf("%lld", tong);
	return 0;
}

