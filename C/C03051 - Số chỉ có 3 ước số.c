#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;
bool nt(int a){
	if(a < 2) return false;
	for(int i = 2; i <= sqrt(a); i++){
		if(a % i == 0) return false;
	}
	return true;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		ll a, b;
		scanf("%lld %lld", &a, &b);
		ll cnt = 0;
		for(int i = sqrt(a); i <= sqrt(b); i++){
			if(nt(i)) cnt++;
		}
		printf("%lld\n", cnt);
	}
	return 0;
}




