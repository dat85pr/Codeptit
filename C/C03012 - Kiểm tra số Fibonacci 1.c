#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>

int fb(int a){
	int m = 1, n = 1, x;
	while(m < a){
		x = m + n;
		m = n;
		n = x;
	}
	if(m == a) return true;
	else return false;
}
int main() {
	int a;
	scanf("%d", &a);
	if(fb(a)) printf("1");
	else printf("0");
	return 0;
}


