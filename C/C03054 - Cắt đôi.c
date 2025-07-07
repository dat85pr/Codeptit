#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>

typedef long long ll;

ll cat(ll a){
	ll cnt = 0;
	ll b = 0;
	while(a > 0){
		ll x = a % 10;
		if(x != 0 && x != 8 && x != 9 && x != 1) return 0;
		else{
			if(x == 1){
				b = pow(10, cnt) + b;	
			}
			cnt++;
		}
		a /= 10;
	}
	return b;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		ll n;
		scanf("%lld", &n);
		if(cat(n) == 0){
			printf("INVALID\n");
		}
		else{
			printf("%lld\n", cat(n));
		}
	}
	return 0;
}





