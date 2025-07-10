#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#define MAX 100

int main() {
	int a;
	scanf("%d", &a);
	int cuoi = a % 10;
	int i = 10;
	while(a >= i){
		i *= 10;
	}
	i /= 10;
	int dau = a / i;
	printf("%d %d", dau, cuoi);
	return 0;
}

