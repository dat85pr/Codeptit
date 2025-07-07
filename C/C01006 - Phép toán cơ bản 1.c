#include <stdio.h>
#include <stdint.h>
#include<math.h>
#define MAX 100
typedef long long ll;

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	if(n == 0){
		printf("0");
	}
	else{
		int tong, hieu, tich, du;
		float thuong;
		tong = m + n;
		hieu = m - n;
		tich = m * n;
		thuong = (float)m / n;
		du = m % n;
		printf("%d %d %d %.2f %d", tong, hieu, tich, thuong, du);
	}

	return 0;
}

