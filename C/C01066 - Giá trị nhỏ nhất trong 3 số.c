#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#define MAX 100

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(a <= b && a <= c){
		printf("%d", a);
	}
	else if(c <= b && c <= a){
		printf("%d", c);
	}
	else if(b <= c && b <= a){
		printf("%d", b);
	}
	return 0;
}

