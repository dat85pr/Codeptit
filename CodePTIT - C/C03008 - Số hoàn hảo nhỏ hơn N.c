#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>

int a[4] = {6, 28, 496, 8128};
int main() {
	int n;
	scanf("%d", &n);
	for(int i = 0; i <= 3; i++){
		if(a[i] < n){
			printf("%d ", a[i]);
		}
	}
	return 0;
}


