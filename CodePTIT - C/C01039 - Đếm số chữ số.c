#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#define MAX 100

int main() {
	int a;
	scanf("%d", &a);
	int cnt = 0;
	while(a > 0){
		a /= 10;
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}

