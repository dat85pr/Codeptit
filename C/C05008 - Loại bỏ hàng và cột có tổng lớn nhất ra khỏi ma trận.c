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
    	int m, n;
    	scanf("%d %d", &m, &n);
    	int hang[11] = {0}, cot[11] = {0};
    	int a[21][21];
    	int maxh = 0, maxc = 0;
    	int max1 = 0, max2 = 0;
    	for(int i = 0; i < m; i++){
    		for(int j = 0; j < n; j++){
    			scanf("%d", &a[i][j]);
			}
		}
		for(int i = 0; i < m; i++){
    		for(int j = 0; j < n; j++){
    			hang[i] += a[i][j];
    			if(hang[i] > maxh){
    				maxh = hang[i];
    				max1 = i;
    			}
			}
		}
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				if(i != max1){
					cot[j] += a[i][j];
					if(cot[j] > maxc){
						max2 = j;
						maxc = cot[j];
					}
				}
			}
		}
		printf("Test %d:\n", h);
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				if(i != max1 && j != max2){
					printf("%d ", a[i][j]);
				}
			}
			printf("\n");
		}
	}
    return 0;
}