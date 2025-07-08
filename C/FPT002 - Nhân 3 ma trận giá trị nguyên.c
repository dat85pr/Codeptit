#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
typedef long long ll;

int main(){
    int n, m, p, q;
    scanf("%d %d %d %d", &m, &n, &p, &q);
    int a[251][251], b[251][251], c[251][251], d[251][251], e[251][251];
    for(int i = 0; i < m; i++){
    	for(int j = 0; j < n; j++){
    		scanf("%d", &a[i][j]);
		}
	}
	for(int i = 0; i < n; i++){
    	for(int j = 0; j < p; j++){
    		scanf("%d", &b[i][j]);
		}
	}
	for(int i = 0; i < p; i++){
		for(int j = 0; j < q; j++){
			scanf("%d", &c[i][j]);
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < p; j++){
			for(int h = 0; h < n; h++){
				d[i][j] += a[i][h] * b[h][j]; 
			}
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < q; j++){
			for(int h = 0; h < p; h++){
				e[i][j] += d[i][h] * c[h][j]; 
			}
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < q; j++){
			printf("%d ", e[i][j]);
		}
		printf("\n");
	}
    return 0;
}