#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
typedef long long ll;
void swap(ll *a, ll *b){
	int temp =  *a;
	*a = *b;
	*b = temp;
}
bool tong(ll a){
	ll tong = 0;
	while(a > 0){
		tong += a % 10;
		a /= 10;
	}
	if(tong % 10 == 8) return true;
	return false;
}
bool kt(ll a){
	ll b = a;
	bool ok = false;
	ll x = 0;
	while(a > 0){
		if(a % 10 == 6) ok = true;
		x =  x * 10 + a % 10;
		a /= 10;
	}
	if(b == x && ok && tong(b)) return true;
	return false;
}
int main(){
    ll a, b;
    scanf("%lld %lld", &a, &b);
    if(a > b) swap(&a, &b);
    for(ll i = a; i <= b; i++){
    	if(kt(i)) printf("%lld ", i);
	}
    return 0;
}