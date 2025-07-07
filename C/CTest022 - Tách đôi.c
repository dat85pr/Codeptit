#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;
ll ucln(ll a, ll b){
	if(a == 0 || b == 0){
		return a + b;	
	}
	while(a != b){
		if(a > b){
			a = a - b;
		}
		if(b > a){
			b = b - a;
		}
	}
	return a;
}
ll dem(ll a){
	int cnt = 0;
	while(a > 0){
		cnt++;
		a /= 10;
	}
	return cnt;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		ll x;
		scanf("%lld", &x);
		if(dem(x) % 2 == 0){
			ll i = dem(x) / 2;
			int a = pow(10, i);
			ll m = x % a, y = x / a;
			ll z = m * y / ucln(m, y);
			printf("%lld\n", z);
		}
		else{
			printf("INVALID\n");
		}
	}
	return 0;
}




