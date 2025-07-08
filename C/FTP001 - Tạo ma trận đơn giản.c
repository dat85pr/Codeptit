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
    int cnt = 0;
    for(int i = 0; i < n; i++){
    	int h = cnt;
    	for(int j = 0; j < n - cnt; j++){
    		while(h > 0){
    			printf("0 ");
    			h--;
			}
			printf("%d ", j);
		}
		cnt++;
		printf("\n");
	}
    return 0;
}