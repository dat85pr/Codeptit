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
		int max = 0, min = 9;
		while(a > 0){
			int x = a % 10;
			a /= 10;
			if(x <= min){
				min = x;
			}
			if(x >= max){
				max = x;
			}
		}
		printf("%d %d\n", max, min);
	}
}

