#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>

bool nt(int a){
	if(a == 2) return true;
	for(int i = 2; i <= sqrt(a); i++){
		if(a % i == 0) return false;
	}
	return true;
}

int main() {
	int a;
	scanf("%d", &a);
	int cnt = 0;
	int x = 2;
	while(cnt < a){
		if(nt(x)){
			printf("%d\n", x);
			cnt++;
		}
		x++;
	}
	return 0;
}


