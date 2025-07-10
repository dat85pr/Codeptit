#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;

int main() {
	int n;
	scanf("%d", &n);
	int dd[100005] = {0};
	for(int i = 0; i < n - 1; i++){
		int x, y;
		scanf("%d %d", &x, &y);
		dd[x]++;
		dd[y]++;
	}
	for(int i = 1; i <= n; i++){
		if(dd[i] != n - 1 && dd[i] != 1){
			printf("No");
			return 0;
		}
	}
	printf("Yes");
	return 0;
}