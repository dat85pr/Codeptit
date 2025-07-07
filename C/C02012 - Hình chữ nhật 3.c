#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#define MAX 100

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int max = b;
	for(int i = 1; i <= a; i++){
		int x = i;
		int cnt = 1;
		for(int j = x; j >= 1; j--){
			if(cnt <= b){
				printf("%d", j);
				cnt++;
			}
		}
		
		for(int j = 1; j <= b - x; j++){
			printf("%d", j  + 1);
		}
		printf("\n");
		
	}
	return 0;
}


