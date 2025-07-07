#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;
int i = 1;
void testcase(){
	int m, n, q;
	scanf("%d %d %d", &m, &n, &q);
	int a[m], b[n];
	for(int i = 1; i <= m; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 1; i <= n; i++){
		scanf("%d", &b[i]);
	}
	printf("Test %d:\n", i);
	for(int i = 1; i <= q; i++){
		printf("%d ", a[i]);
	}
	for(int i = 1; i <= n; i++){
		printf("%d ", b[i]);
	}
	for(int i = q + 1; i <= m; i++){
		printf("%d ", a[i]);
	}
	i++;
	printf("\n");
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		testcase();
	}
	return 0;
}





