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
    for(int cnt = 1; cnt <= t; cnt++){
    	int m, n;
    	int a[11][11];
    	scanf("%d %d", &m, &n);
    	for(int i = 0; i < m; i++){
    		for(int j = 0; j < n; j++){
    			scanf("%d", &a[i][j]);
			}
		}
		printf("Test %d:\n", cnt);
		for(int i = 1; i < m; i++){
    		for(int j = 1; j < n; j++){
    			printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
    return 0;
}