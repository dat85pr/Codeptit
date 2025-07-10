#include <stdio.h>
#include <stdint.h>
#include<math.h>
#define MAX 100
typedef long long ll;

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	printf("%d\n%d\n%lld\n%d\n%d\n%.2f", m + n, m - n, (long long)m * n, m / n, m % n, (double)m / n);
	return 0;
}

