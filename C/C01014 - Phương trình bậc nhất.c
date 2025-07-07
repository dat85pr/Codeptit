#include <stdio.h>
#include <stdint.h>
#include<math.h>
#define MAX 100
typedef long long ll;

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if(a == 0 && b == 0){
		printf("Vo so nghiem");
	}
	else if(a == 0 && b != 0){
		printf("Vo nghiem");
	}
	else{
		printf("%.2f", (float) - b / a);
	}
}

