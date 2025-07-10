#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;
bool skg(ll a){
	ll y = a % 10;
	a /= 10;
	while(a > 0){
		if(a % 10 > y) return false;
		y = a % 10;
		a /= 10;
	}
	return true;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int x = pow(10, n - 1);
		int y = pow(10, n);
		for(int i = x; i < y; i++){
			if(skg(i)) printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}




