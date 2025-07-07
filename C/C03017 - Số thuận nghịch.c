#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>

bool tn(long long a){
	long long b = a;
	long long x = 0;
	while(a > 0){
		x = x * 10 + a % 10;
		a /= 10;
	}
	if(x == b) return true;
	else return false;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		long long a;
		scanf("%lld", &a);
		if(tn(a)) printf("YES\n");
		else printf("NO\n");
	}
}


