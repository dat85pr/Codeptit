#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;

int main(){
	int n;
	scanf("%d", &n);
	ll tong = 0;
	for(int i = 0; i < n; i++){
		int x;
		scanf("%d", &x);
		tong += x;
	}
	float tb = (float) tong / n;
	printf("%.3f", tb);
	return 0;
}






