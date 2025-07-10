#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;
bool nt(int a){
	if(a < 2) return false;
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
		int b[a];
		for(int i = 0; i < a; i++){
			scanf("%d", &b[i]);
		}
		for(int i = 0; i < a; i++){
			if(nt(b[i])){
				printf("%d ", b[i]);
			}
		}
		printf("\n");
	}
	return 0;
}




