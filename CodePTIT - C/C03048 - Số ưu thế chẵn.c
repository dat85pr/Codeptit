#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;
bool kt(ll a){
	ll c = 0, l = 0;
	ll b = a;
	while(a > 0){
		int x = a % 10;
		if(x % 2 == 0) c++;
		else l++;
		a /= 10;
	}
	if(c > l && b % 2 == 0) return true;
	return false;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		ll n;
		scanf("%lld", &n);
		if(kt(n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}





