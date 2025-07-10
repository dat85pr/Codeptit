#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#define MAX 100
bool nt(int a){
	if(a <= 2) return true;
	for(int i = 2; i <= sqrt(a); i++){
		if(a % i == 0) return false;
	}
	return true;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int a;
		scanf("%d", &a);
		for(int i = 2; i <= a; i++){
			if(nt(a)){
				printf("%d", a);
				break;
			}
			else if(nt(i)){
				while(a % i == 0){
					printf("%d ", i);
					a /= i;
				}
			}
		}
		printf("\n");
	}
	return 0;
}

