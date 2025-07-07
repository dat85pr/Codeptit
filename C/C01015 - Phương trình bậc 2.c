#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#define MAX 100

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int delta = b * b - 4 * a *c;
	if(delta < 0){
		printf("NO");
	}
	else if(delta == 0){
		float x = -b / (2 * a);
		printf("%.2f", x);
	}
	else{
		float x1, x2;
		x1 = (- b - sqrt(delta)) / (2 * a);
		x2 = (- b + sqrt(delta)) / (2 * a);
		printf("%.2f %.2f", x2, x1);
	}
	return 0;
}


