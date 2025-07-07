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
	int n;
	scanf("%d", &n);
	int a[10005], cnt = 0;
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		if(nt(a[i])){
			cnt++;
		}
	}
	printf("%d ", cnt);
	for(int i = 0; i < n; i++){
		if(nt(a[i])){
			printf("%d ", a[i]);
		}
	}
	return 0;
}





