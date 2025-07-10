#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;

int main(){
	int n;
	scanf("%d", &n);
	int a[n], b[n], dd[100005] = {0};
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		dd[a[i]]++;
	}
	int j = 0;
	for(int i = 0; i < n; i++){
		if(dd[a[i]] > 1){
			b[j] = a[i];
			j++;
			dd[a[i]] = 0;
		}
	}
	printf("%d\n", j);
	for(int i = 0; i <= j - 1; i++){
		printf("%d ", b[i]);
	}
	return 0;
}






