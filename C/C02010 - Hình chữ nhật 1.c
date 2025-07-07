#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#define MAX 100

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int cnt = 0;
	for(int i = 1; i <= a; i++){
		printf("%d", i);
		for(int j = cnt; j < b - 1; j++){
			printf("%d", j + 2);
		}
		int cp = cnt;
		if(cp >= b) cp = b - 1;
		for(int j = cp; j > 0; j--){
			printf("%d", j);
		}
		printf("\n");
		cnt++;
	}
	return 0;
}


