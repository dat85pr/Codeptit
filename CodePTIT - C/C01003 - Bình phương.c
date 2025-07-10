#include <stdio.h>
#include <stdint.h>
#include<math.h>
#define MAX 100
typedef long long ll;

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
    	ll a;
    	scanf("%lld", &a);
    	ll d = a * a;
    	printf("%lld", d);
    	printf("\n");
	}
	return 0;
}

