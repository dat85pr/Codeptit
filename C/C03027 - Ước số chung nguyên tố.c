#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>

bool nt(int a){
	if(a < 2) return false;
	for(int i = 2; i <= sqrt(a); i++){
		if(a % i == 0) return false;
	}
	return true;
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
bool kt(int a, int b){
	int x = ucln(a, b);
	int y = 0;
	while(x > 0){
		y += x % 10;
		x /= 10;
	}
	if(nt(y)) return true;
	return false;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		if(kt(a, b)){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}


