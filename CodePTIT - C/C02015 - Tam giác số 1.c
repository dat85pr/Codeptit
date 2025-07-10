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
    int cnt = 1;
    for(int i = 1; i <= n; i++){
    	
    	for(int j = 1; j <= cnt; j++){
    		printf("%d", j);
		}
		printf("\n");
		cnt += 2;
	}
    return 0;
}