#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int a;
		scanf("%d", &a);
		int b[a];
		for(int i = 0; i < a; i++){
			scanf("%d", &b[i]);
		}
		for(int i = 0; i < a; i++){
			if(b[i] % 2 == 0){
				printf("%d ", b[i]);
			}
		}
		printf("\n");
	}
	return 0;
}




