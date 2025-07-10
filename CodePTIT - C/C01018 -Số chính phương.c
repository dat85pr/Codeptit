#include <stdio.h>
#include <stdint.h>
#include<math.h>
#define MAX 100
typedef long long ll;

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int x;
		scanf("%d", &x);
		int a = sqrt(x);
		if(a * a == x){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}

