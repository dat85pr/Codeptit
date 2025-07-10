#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>

int ucln(int a, int b){
	if(a == 0 || b == 0){
		return a + b;
	}
	while(a != b){
		if(a > b){
			a = a - b;
		}
		else{
			b = b - a;
		}
	}
	return a;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	for(int i = a; i < b; i++){
		for(int j = i + 1; j <= b; j++){
			if(ucln(i, j) == 1){
				printf("(%d,%d)\n", i, j);
			}
		}
	}
	return 0;
}


