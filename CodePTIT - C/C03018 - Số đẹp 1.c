#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>

bool fb(int a){
	int m = 1, n = 1, x;
	while(m < a){
		x = m + n;
		m = n;
		n = x;
	}
	if(m == a) return true;
	else return false;
}
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
	if(fb(tong)) return true;
	else return false;
}
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if(a > b){
		for(int i = b; i <= a; i++){
			if(nt(i) && kt(i)){
				printf("%d ", i);
			}
		}	
	}
	else{
		for(int i = a; i <= b; i++){
			if(nt(i) && kt(i)){
				printf("%d ", i);
			}
		}
	}
}


