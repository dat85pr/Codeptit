#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>

bool nt(int a){
	if(a <= 2) return true;
	for(int i = 2; i <= sqrt(a); i++){
		if(a % i == 0) return false;
	}
	return true;
}
bool tn(int a){
	int b = a;
	int x = 0;;
	while(a > 0){
		x = x* 10 + a % 10;
		a /= 10;
	}
	if(x == b) return true;
	else return false;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		int cnt = 0;
		for(int i = a; i <= b; i++){
			if(tn(i) && nt(i)){
				cnt++;
				printf("%d ", i);
				if(cnt % 10 == 0){
					printf("\n");
				}
			}
		}
		printf("\n");
	}
	return 0;
}


