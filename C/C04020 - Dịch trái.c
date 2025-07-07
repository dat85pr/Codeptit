#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;

int main(){
	int n;
	scanf("%d", &n);
	int a[n], q;
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &q);
	for(int i = q; i < n; i++){
		printf("%d ", a[i]);
	}
	for(int i = 0; i < q; i++){
		printf("%d ", a[i]);
	}
	
	return 0;
}





