#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
typedef long long ll;

bool nt(ll a){
	if(a < 2) return false;
	for(int i = 2; i <= sqrt(a); i++){
		if(a % i == 0) return false;
	}
	return true;
}
void testcase(){
	ll n;
    scanf("%lld", &n);
    ll tich = 1;
   	if(nt(n)){
   		printf("%lld\n", n);
   		return;
	}
    for(int i = 2; i <= n; i++){
   		if(n % i == 0){
   			tich *= i;
   			while(n % i == 0){
				n /= i;
			}
			if(n == 1){
				printf("%lld\n", tich);
			}
		}
	}
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
    	testcase();
	}
    return 0;
}
