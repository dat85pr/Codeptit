#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
typedef long long ll;
bool nt(int a){
	if(a < 2) return false;
	for(int i = 2; i <= sqrt(a); i++){
		if(a % i == 0) return false;
	}
	return true;
}
int main(){
    int m, n;
    int a[21][21];
    scanf("%d %d", &m, &n);
    for(int i = 0; i < m; i++){
    	for(int j = 0; j < n; j++){
    		scanf("%d", &a[i][j]);
		}
	}
	for(int i = 0; i < m; i++){
   		for(int j = 0; j < n; j++){
   			if(nt(a[i][j])){
   				printf("1 ");
			}
			else printf("0 ");
		}
		printf("\n");
	}
    return 0;
}