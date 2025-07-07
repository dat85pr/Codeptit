#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;
bool kt(ll a){
	while(a > 0){
		int x = a % 10;
		if(x % 2 == 1) return false;
		a /= 10;
	}
	return true;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		ll a;
		scanf("%lld", &a);
		if(a % 2 == 0 && kt(a)){
			printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
}	


