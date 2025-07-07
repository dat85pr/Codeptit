#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int x = MAX(a, b);
	for(int i = 0; i < a; i++){
		int c = x - i;
		int cnt = 1;
		for(int j = c; j >= 1; j--){
			if(cnt <= b){
				printf("%d", j);
				cnt++;
			}
		}
		for(int j = 1; j <= b - c; j++){
			printf("%d", j + 1);
		}
		printf("\n");
	}
	return 0;
}


