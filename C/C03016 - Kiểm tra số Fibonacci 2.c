#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;

ll fb(ll a){
	ll m = 0, n = 1, x;
	while(m < a){
		x = m + n;
		m = n;
		n = x;
	}
	if(m == a) return true;
	return false;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		ll a;
		scanf("%lld", &a);
		if(fb(a)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}





