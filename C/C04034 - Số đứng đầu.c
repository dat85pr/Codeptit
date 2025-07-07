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
		int a[n], b[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int max = a[n - 1];
		int j = 0;
		b[j] = max;
		j++;
		for(int i = n - 2; i >= 0; i--){
			if(a[i] > max){
				b[j] = a[i];
				max = a[i];
				j++;
			}
		}
		for(int i = j - 1; i >= 0; i--){
			printf("%d ", b[i]);
		}
		printf("\n");
	}
	
	return 0;
}






