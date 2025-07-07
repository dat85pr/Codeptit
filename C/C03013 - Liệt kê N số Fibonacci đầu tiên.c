#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>


int main() {
	int a;
	scanf("%d", &a);
	int m = 0, n = 1, x;
	int cnt = 1;
	while(cnt <= a){
		printf("%d ", m);
		x = m + n;
		m = n;
		n = x;
		cnt++;
	}
}


