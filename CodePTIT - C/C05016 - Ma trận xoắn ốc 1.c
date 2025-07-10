#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
typedef long long ll;


int main(){
	int n;
	scanf("%d", &n);
	int hang = n, cot = n, a[101][101], d = 1;
	int cnt = 1;
	while(cnt <= n * n){
		for(int i = d; i <= cot; i++){
			a[d][i] = cnt++;
		}
		for(int i = d + 1; i <= hang; i++){
			a[i][cot] = cnt++;
		}
		for(int i = cot - 1; i >= d; i--){
			a[hang][i] = cnt++;
		}
		for(int i = hang - 1; i > d; i--){
			a[i][d] = cnt++;
		}
		d++;
		hang--;
		cot--;
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
    return 0;
}