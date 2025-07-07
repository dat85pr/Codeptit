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
bool kt(int a){
	int tong = 0;
	while(a > 0){
		tong += a % 10;
		a /= 10;
	}
	if(tong % 5 == 0) return true;
	return false;
}
int main() {
	int n;
	scanf("%d", &n);
	int cnt = 0;
	for(int i = 1; i < n; i++){
		if(nt(i) && kt(i)){
			printf("%d ", i);
			cnt++;
		}
	}
	printf("\n%d", cnt);
	return 0;
}





