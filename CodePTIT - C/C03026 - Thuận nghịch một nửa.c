#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>

bool tn(int a){
	int b = a;
	int x = 0;
	while(a > 0){
		x = x * 10 + a % 10;
		a /= 10;
	}
	if(b == x) return true;
	return false;
}
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if(tn(a) && !tn(b) || !tn(a) && tn(b)){
		printf("YES");
	}
	else{
		printf("NO");
	}
}


