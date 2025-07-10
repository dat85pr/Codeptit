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

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 2; i <= n; i++){
    	while(nt(i) && n % i == 0){
    		printf("%d", i);
    		n /= i;
    		if(n > 1) printf("x");
		}
	}
    return 0;
}