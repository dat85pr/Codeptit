#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
typedef long long ll;

int main(){
    int n, m, p;
    scanf("%d %d %d", &n, &m, &p);
    int a[251][251], b[251][251], c[251][251];
    for(int i = 0; i < n; i++){
    	for(int j = 0; j < m; j++){
    		scanf("%d", &a[i][j]);
		}
	}
	for(int i = 0; i < m; i++){
    	for(int j = 0; j < p; j++){
    		scanf("%d", &b[i][j]);
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < p; j++){
			for(int h = 0; h < m; h++){
				c[i][j] += a[i][h] * b[h][j]; 
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < p; j++){
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
    return 0;
}