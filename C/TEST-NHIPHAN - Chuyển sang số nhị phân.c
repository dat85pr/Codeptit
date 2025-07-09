#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
typedef long long ll;


int main(){
    int n, res = 0, cnt = 0, c[100];
    scanf("%d", &n); 
    while(n != 0){
    	c[cnt++] = n % 2;
    	n /= 2;
	}
	for(int i = cnt - 1; i >= 0; i--){
		res = res * 10 + c[i];
	}
	printf("%d\n", res);
    return 0;
}