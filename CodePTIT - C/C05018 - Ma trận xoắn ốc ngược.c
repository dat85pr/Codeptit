#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
typedef long long ll;


int main(){
	int t;
	scanf("%d", &t);
	for(int h = 1; h <= t; h++){
		int n;
		scanf("%d", &n);
		int hang = n, cot = n, a[101][101], d = 1;
		int cnt = n * n;
		while(cnt >= 1){
			for(int i = d; i <= cot; i++){
				a[d][i] = cnt--;
			}
			for(int i = d + 1; i <= hang; i++){
				a[i][cot] = cnt--;
			}
			for(int i = cot - 1; i >= d; i--){
				a[hang][i] = cnt--;
			}
			for(int i = hang - 1; i > d; i--){
				a[i][d] = cnt--;
			}
			d++;
			hang--;
			cot--;
		}
		printf("Test %d:\n", h);
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
    return 0;
}