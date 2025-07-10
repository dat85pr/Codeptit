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
	int max1 = a[0], max2 = 0;
	for(int i = 0; i < n; i++){
		if(a[i] > max1) max1 = a[i];
	}
	for(int i = 0; i < n; i++){
		if(a[i] < max1 && a[i] > max2) max2 = a[i];
	}
	printf("%d %d", max1, max2);
	return 0;
}






