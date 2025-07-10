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
		else{
			b = b - a;
		}
	}
	return a;
}
long long bcnn(long long a, long long b){
	long long x = ucln(a, b);
	long long y = a * b / x;
	return y;
}
int main() {
	long long a, b;
	scanf("%lld %lld", &a, &b);
	long long x = ucln(a, b);
	long long y = bcnn(a, b);
	printf("%lld\n%lld", x, y);
	return 0;
}


