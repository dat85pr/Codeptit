#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#define MAX 100

int main() {
	int a;
	scanf("%d", &a);
	for(int i = 1; i <= a; i++){
		for(int j = 1; j <= i; j++){
			if(i == 1 || i == a || j == 1 || j == i){
				printf("*");
			}
			else{
				printf(".");
			}
		}
		printf("\n");
	}
	return 0;
}


