#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;
ll first(ll a){
	ll i = 10;
	while(i <= a){
		i *= 10;
	}
	i /= 10;
	ll dau = a / i;
	return dau;
}
bool kt(ll a){
	ll dau = first(a);
	int cuoi = a % 10;
	a /= 10;
	ll i = 10;
	while(i <= a){
		i *= 10;
	}
	i /= 10;
	ll giua = a % i;
	ll b = giua;
	ll x = 0;
	while(giua > 0){
		x = x * 10 + giua % 10;
		giua /= 10;
	}
	if(b == x && (dau == cuoi * 2 || cuoi == dau * 2)) return true;
	return false;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		ll x;
		scanf("%lld", &x);
		if(kt(x)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}




