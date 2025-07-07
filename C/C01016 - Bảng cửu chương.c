#include <stdio.h>
#include <stdint.h>
#include<math.h>
#define MAX 100
typedef long long ll;

int main() {
	int a;
	scanf("%d", &a);
	for(int i = 1; i <= 10; i++){
		printf("%d ", a * i);
	}
}

