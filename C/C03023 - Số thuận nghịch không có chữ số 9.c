#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
typedef long long ll;

bool kt(ll a){
	ll b = a;
	bool ok = true;
	ll x = 0;
	while(a > 0){
		if(a % 10 == 9) ok = false;
		x =  x * 10 + a % 10;
		a /= 10;
	}
	if(b == x && ok) return true;
	return false;
}
int main(){
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for(int i = 2; i < n; i++){
    	if(kt(i)){
    		printf("%d ", i);
    		cnt++;
		}
	}
	printf("\n%d", cnt);
    return 0;
}