#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#define MAX 100

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	for(int i = 1; i <= m; i++){
		int h = i - 1;
		for(int j = 1; j <= n; j++){
			while(h > 0){
				printf("~");
				h--;
			}
			if(i == 1 || i == m ||j == 1 || j == n){
				printf("*");
			}
			else printf(".");
		}
		printf("\n");
	}
	return 0;
}


