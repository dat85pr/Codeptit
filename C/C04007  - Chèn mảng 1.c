#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;
int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	int a[m], b[n];
	for(int i = 1; i <= m; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 1; i <= n; i++){
		scanf("%d", &b[i]);
	}
	int q;
	scanf("%d", &q);
	for(int i = 1; i <= q; i++){
		printf("%d ", a[i]);
	}
	for(int i = 1; i <= n; i++){
		printf("%d ", b[i]);
	}
	for(int i = q + 1; i <= m; i++){
		printf("%d ", a[i]);
	}
	return 0;
}





