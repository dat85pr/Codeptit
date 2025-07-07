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
int main(){
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		int n;
		scanf("%d", &n);
		int max = 0;
		int a[101], dd[10005] = {0};
		for(int j = 0; j < n; j++){
			scanf("%d", &a[j]);
			dd[a[j]]++;
			if(nt(a[j]) && a[j] >= max) max = a[j];
		}
		printf("Test %d:\n", i);
		for(int j = 2; j <= max; j++){
			if(dd[j] >= 1 && nt(j)){
				printf("%d xuat hien %d lan\n", j, dd[j]);
			}
		}
	}
	return 0;
}





