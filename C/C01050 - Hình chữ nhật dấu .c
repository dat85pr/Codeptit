#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#define MAX 100

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	for(int i = 1; i <= b; i++){
		for(int j = 1; j <= a; j++){
			if(j == a || j == 1 || i == 1 || i == b){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

