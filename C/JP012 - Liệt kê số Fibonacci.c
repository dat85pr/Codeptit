#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;
ll x[93];
void sang(){
	x[0] = 0, x[1] = 1;
	for(int i = 2; i <= 92; i++){
		x[i] = x[i - 1] + x[i - 2];
	}
}
int main(){
	int t;
	scanf("%d", &t);
	sang();
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		for(int i = a; i <= b; i++){
			printf("%lld ", x[i]);
		}
		printf("\n");
	}
	return 0;
}






