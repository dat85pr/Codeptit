#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#define MAX 100

int main() {
	int a;
	scanf("%d", &a);
	int tich = 1;
	while(a > 0){
		tich *= a % 10;
		a/= 10;
	}
	printf("%d", tich);
	return 0;
}

