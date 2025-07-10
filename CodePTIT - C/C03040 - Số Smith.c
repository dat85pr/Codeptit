#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
bool nt(long long a){
	if(a < 2) return false;
	for(int i = 2; i <= sqrt(a); i++){
		if(a % i == 0) return false;
	}
	return true;
}
long long tong(long long a){
	long long tong = 0;
	while(a > 0){
		tong += a % 10;
		a /= 10;
	}
	return tong;
}
int main() {
	long long a;
	scanf("%lld", &a);
	long long sum = 0;
	long long x = tong(a);
	for(int i = 2; i <= a; i++){
		while(a % i == 0 && nt(i)){
			sum += tong(i);
			a /= i;
		}
	}
	if(x == sum){
		printf("YES");
	}	
	else printf("NO");
	return 0;
}



