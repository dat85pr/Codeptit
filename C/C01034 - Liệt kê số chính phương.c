#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#define MAX 100

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int x = sqrt(a), y = sqrt(b);
	if(x * x < a) x++;
	printf("%d\n", y - x + 1);
	for(int i = x; i <= y; i++){
		printf("%d\n", i * i);
	}
	return 0;
}

