#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#define MAX 100

int main() {
	int a;
	scanf("%d", &a);
	int chan = 0, le = 0;
	while(a > 0){
		int x = a % 10;
		a /= 10;
		if(x % 2 == 0){
			chan++;
		}
		else{
			le++;
		}
	}
	printf("%d %d", le, chan);
	return 0;
}

