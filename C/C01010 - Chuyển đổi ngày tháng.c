#include <stdio.h>
#include <stdint.h>
#include<math.h>
#define MAX 100
typedef long long ll;

int main() {
	int a;
	scanf("%d", &a);
	int nam, tuan, ngay;
	nam = a / 365;
	a = a - nam * 365;
	tuan = a / 7;
	a = a - 7 * tuan;
	ngay = a;
	printf("%d %d %d", nam, tuan, ngay);
	return 0;
}

