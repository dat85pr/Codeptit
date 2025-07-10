#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;
int main() {
	int n, k;
	scanf("%d %d", &n, &k);

	int count2 = 0;
	for (int i = 2; i <= n; i *= 2) {
		count2 += n / i;
	}

	if (count2 >= k) printf("Yes\n");
	else printf("No\n");

	return 0;
}


