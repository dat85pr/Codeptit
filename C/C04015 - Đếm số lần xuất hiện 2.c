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
		int a[101], dd[100005] = {0};
		for(int j = 0; j < n; j++){
			scanf("%d", &a[j]);
			dd[a[j]]++;
		}
		printf("Test %d:\n", i);
		for(int j = 0; j < n; j++){
			if(dd[a[j]] >= 1){
				printf("%d xuat hien %d lan\n", a[j], dd[a[j]]);
				dd[a[j]] = 0;
			}
		}
	}
	return 0;
}





