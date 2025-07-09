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
    	int n, m;
    	scanf("%d %d", &m, &n);
    	int a[251][251], b[251][251];
    	for(int i = 0; i < m; i++){
    		for(int j = 0; j < n; j++){
    			scanf("%d", &a[i][j]);
			}
		}
		for(int i = 0; i < n; i++){
   	 		for(int j = 0; j < m; j++){
   	 			b[i][j] = a[j][i];
			}
		}
		printf("Test %d:\n", h);
		for(int i = 0; i < m; i++){
			for(int j = 0; j < m; j++){
				int s = 0;
				for(int h = 0; h < n; h++){
					s += a[i][h] * b[h][j]; 
				}
				printf("%d ", s);
			}
			printf("\n");
		}
		
	}
    return 0;
}