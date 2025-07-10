#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#define MAX 100

int main() {
	int a;
	scanf("%d", &a);
	int cuoi = a % 10;
	int b = cuoi;
	a /= 10;
	int i = 10;
	while(a >= i){
		i = i * 10;
	}
	i /= 10;
	int x = a % i;
	x = x * 10 + a / i;
	b = b * i * 10 + x;
	printf("%d", b);
	return 0;
}

