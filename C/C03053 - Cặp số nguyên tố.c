#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;
bool nt(int a){
	if(a < 2) return 0;
	for(int i = 2; i<= sqrt(a); i++){
		if(a % i == 0){
			return false;
		}
	}
	return true;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i = 2; i <= n / 2; i++){
			if(nt(i) && nt(n - i)) printf("%d %d ", i, n - i);
		}
		printf("\n");
	}
	return 0;
}



