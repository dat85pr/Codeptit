#include <stdio.h>
#include <stdint.h>
#include<math.h>
#define MAX 100
typedef long long ll;

int main() {
	int a;
	scanf("%d", &a);
	double f = (double)a * 9 / 5;
	printf("%.2f", f + 32);
	return 0;
}

