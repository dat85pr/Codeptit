#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#define MAX 100

int main() {
	int n;
	scanf("%d", &n);
	int m = n - 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n + m; j++){
			if(j <= m){
				printf("~");
			}
			else printf("*");
		}
		m--;
		printf("\n");
	}
	return 0;
}

