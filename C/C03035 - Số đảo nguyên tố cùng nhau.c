#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
int tn(int a){
	int x = 0;
	while(a > 0){
		x = x * 10 + a % 10;
		a /= 10;
	}
	return x;
}
int ucln(int a, int b){
	if(a == 0 || b == 0){
		return a + b;
	}
	while(a != b){
		if(a > b){
			a = a - b;
		}
		if(b > a){
			b = b - a;
		}
	}
	return a;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int a;
		scanf("%d", &a);
		if(ucln(a, tn(a)) == 1){
			printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
}


