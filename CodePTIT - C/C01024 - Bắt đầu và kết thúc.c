#include <stdio.h>
#include <stdint.h>
#include<math.h>
#define MAX 100
typedef long long ll;

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		long long a;
		scanf("%lld", &a);
		int cuoi = a % 10;
		while(a > 10){
			a /= 10;
		}
		if(cuoi == a){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}

