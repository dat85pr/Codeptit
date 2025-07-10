#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>

long long ucln(long long a, long long b){
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
		long long a, b;
		scanf("%lld %lld", &a, &b);
		long long x = ucln(a, b);
		long long y = a * b / x;
		printf("%lld %lld\n", y, x);
	}
}


