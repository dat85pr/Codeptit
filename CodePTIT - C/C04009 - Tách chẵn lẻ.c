#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0) printf("%d ", a[i]);
	}
	printf("\n");
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 1) printf("%d ", a[i]);
	}
	return 0;
}





