#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;
bool sg(ll a){
	ll y = a % 10;
	a /= 10;
	while(a > 0){
		if(a % 10 <= y) return false;
		y = a % 10;
		a /= 10;
	}
	return true;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		ll n, m;
		scanf("%lld %lld", &n, &m);
		ll cnt = 0;
		for(ll i = n; i <= m; i++){
			if(sg(i)) cnt++;
		}
		printf("%lld\n", cnt);
	}
	return 0;
}



