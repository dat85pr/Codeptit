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
bool kt(int a){
	int y = 0;
	while(a > 0){
		y = a % 10;
		a /= 10;
		if(!nt(y)) return false;
	}
	return true;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		int cnt = 0;
		for(int i = a; i <= b; i++){
			if(kt(i) && nt(i)) cnt++;
		}
		printf("%d\n", cnt);
	}
}


