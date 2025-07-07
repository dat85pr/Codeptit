#include <stdio.h>
#include <stdint.h>

#define MAX 100

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
    	int a;
    	scanf("%d", &a);
    	int d = a * 2;
    	printf("%d", d);
    	printf("\n");
	}
	return 0;
}

