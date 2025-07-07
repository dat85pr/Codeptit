#include <stdio.h>
#include <stdint.h>
#include<math.h>
#define MAX 100
typedef long long ll;

int main() {
	int a;
	scanf("%d", &a);
	int tong  = 0;
	while(a > 0){
		tong += a % 10;
		a /= 10;
	}
	printf("%d", tong);
}

