#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;
bool nt(int a){
	if(a < 2) return false;
	for(int i = 2; i <= sqrt(a); i++){
		if(a % i == 0) return false;
	}
	return true;
}
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[1005], b[1005], dd[1005] = {0};
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			dd[a[i]]++;
		}
		int j = 0;
		for(int i = 0; i < n; i++){
			if(nt(a[i]) && dd[a[i]] > 0){
				b[j] = a[i];
				dd[a[i]] = 0;
				j++;	
			}
		}
		for(int i = 0; i < j; i++){
			for(int h = 0; h < j; h++){
				if(b[i] > b[h]) swap(&b[i], &b[h]);
			}
		}
		for(int i = j - 1; i >= 0; i--){
			printf("%d ", b[i]);
		}
		printf("\n");
	}
	return 0;
}






