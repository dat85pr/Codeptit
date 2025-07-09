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
    int n;
    scanf("%d", &n);
    int a[51][51];
    for(int i = 0; i < n; i++){
    	for(int j = 0; j < n; j++){
    		scanf("%d", &a[i][j]);
		}
	}
	int cnt = 0, tong = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(j >= cnt && nt(a[i][j])){
				tong += a[i][j];
			}
		}
		cnt++;
	}
	printf("%d", tong);
    return 0;
}