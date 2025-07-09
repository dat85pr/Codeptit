#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
typedef long long ll;

int main(){
    int m, n, p, q;
    scanf("%d %d", &m, &n);
    int a[51][51], b[51][51];
    for(int i = 1; i <= m; i++){
    	for(int j = 1; j <= n; j++){
    		scanf("%d", &a[i][j]);
		}
	}
	scanf("%d %d", &p, &q);
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			if(j == p){
				b[i][q] = a[i][p];
			}
			else if(j == q){
				b[i][p] = a[i][q];
			}
			else{
				b[i][j] = a[i][j];				
			}
		}
	}
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
    return 0;
}