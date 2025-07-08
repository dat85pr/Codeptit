#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
typedef long long ll;
void swap(ll *a, ll *b){
	ll temp = *a;
	*a = *b;
	*b = temp;
}
bool nt(ll a){
	if(a < 2) return false;
	for(int i = 2; i <= sqrt(a); i++){
		if(a % i == 0) return false;
	}
	return true;
}
bool kt(ll a){
	ll tong = 0;
	while(a > 0){
		ll x = a % 10;
		if (x != 2 && x != 3 && x != 5 && x != 7)
            return 0;
		tong += x;
		a /= 10;
	}
	if(nt(tong)) return true;
	return false;
}
void testcase(){
	ll a, b;
	scanf("%lld %lld", &a, &b);
	ll cnt = 0;
	if(a > b){
		swap(&a, &b);
	}
	for(ll i = a; i <= b; i++){
		if(kt(i) && nt(i)){
			cnt++;
		}
	}
	printf("%lld\n", cnt);
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
    	testcase();
	}
    return 0;
}