#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
typedef long long ll;
ll cmax(ll n){
	ll i = 10;
	ll x = 0;
	while(i <= n){
		i *= 10;
	}
	i /= 10;
	while(n > 0){
		ll a = n / i;
		if(a == 5){
			a = 6;
		}
		x = x + a * i;
		n = n % i;
		i /= 10;
	}
	return x;
}
ll cmin(ll n){
	ll i = 10;
	ll x = 0;
	while(i <= n){
		i *= 10;
	}
	i /= 10;
	while(n > 0){
		ll a = n / i;
		if(a == 6){
			a = 5;
		}
		x = x + a * i;
		n = n % i;
		i /= 10;
	}
	return x;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		ll m, n;
		scanf("%lld %lld", &m, &n);
		printf("%lld %lld\n", cmin(m) + cmin(n), cmax(n) + cmax(m));
	}
    return 0;
}