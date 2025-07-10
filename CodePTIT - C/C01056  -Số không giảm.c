#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#define MAX 100
bool kg(long long a){
	while(a > 0){
		int x = a % 10;
		a /= 10;
		int y = a % 10;
		if(x < y) return false;
	}
	return true;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		long long a;
		scanf("%lld", &a);
		if(kg(a)){
			printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
}

