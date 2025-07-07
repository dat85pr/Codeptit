#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#define MAX 100

int main() {
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

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
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


