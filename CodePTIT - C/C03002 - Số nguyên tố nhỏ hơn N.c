#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>

bool nt(int a){
	if(a <= 2) return true;
	for(int i = 2; i <= sqrt(a); i++){
		if(a % i == 0) return false;
	}
	return true;
}
int main() {
	int a;
	scanf("%d", &a);
	for(int i = 2; i <= a; i++){
		if(nt(i)){
			printf("%d\n", i);
		}
	}
	return 0;
}


