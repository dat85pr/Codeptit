#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;

int main(){
	int n;
	scanf("%d", &n);
	int a[n], dd[100] = {0}, cnt = 0;
	for(int  i = 0; i < n; i++){
		scanf("%d", &a[i]);
		dd[a[i]]++;
	}
	for(int i = 0; i < n; i++){
		if(dd[a[i]] == 1){
			cnt++;
		}
	}
	printf("%d\n", cnt);
	for(int i = 0; i < n; i++){
		if(dd[a[i]] == 1){
			printf("%d ", a[i]);
		}
	}
	return 0;
}





