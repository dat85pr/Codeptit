#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[105], dd[100005] = {0}, max = 0;
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			dd[a[i]]++;
			if(dd[a[i]] > max) max = dd[a[i]];
		}
		for(int i = 0; i < n; i++){
			if(dd[a[i]] == max){
				printf("%d ", a[i]);
				dd[a[i]] = 0;
			}
		}
		printf("\n");
	}
	return 0;
}






