#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
typedef long long ll;

int main(){
    int n, m;
    scanf("%d %d", &m, &n);
    int a[11][11];
    for(int i = 0; i < m; i++){
    	for(int j = 0; j < n; j++){
    		scanf("%d", &a[i][j]);
		}
	}
	for(int i = 0; i < n; i++){
    	for(int j = 0; j < m; j++){
    		printf("%d ", a[j][i]);
		}
		printf("\n");
	}
    return 0;
}