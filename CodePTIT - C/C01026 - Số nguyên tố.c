#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#define MAX 100
bool nt(int a){
	if(a < 2) return 0;
	for(int i = 2; i <= sqrt(a); i++){
		if(a % i == 0) return 0;
	}
	return 1;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int a;
		scanf("%d", &a);
		if(nt(a)){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
		
	}
	return 0;
}

