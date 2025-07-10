#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>

int a[4] = {6, 28, 496, 8128};
int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	if(x < y){
		for(int i = 0; i <= 3; i++){
			if(x <= a[i] && a[i] <= y){
				printf("%d ", a[i]);
			}
		}
	}
	else{
		for(int i = 0; i <= 3; i++){
			if(y <= a[i] && a[i] <= x){
				printf("%d ", a[i]);
			}
		}
	}
	return 0;
}


