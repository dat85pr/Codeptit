#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
typedef long long ll;
ll ucln(ll a, ll b){
	while (b != 0){
        ll x = a % b;
        a = b;
        b = x;
    }
    return a;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		ll n;
		scanf("%lld", &n);
		ll min = 1;
		for(int i = 2; i <= n; i++){
			ll res = ucln(min, i);
			min = min * i / res;
		}
		printf("%lld\n", min);
	}
    return 0;
}