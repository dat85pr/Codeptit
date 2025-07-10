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
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		int a;
		scanf("%d", &a);
		printf("Test %d: ", i);
		for(int i = 2; i <= a; i++){
			int cnt = 0;
			while(a % i == 0 && nt(i)){
				cnt++;
				a /= i;
			}
			if(nt(i) &&  cnt > 0){
				printf("%d(%d) ", i, cnt);
			}
		}
		printf("\n");
	}
	return 0;
}


