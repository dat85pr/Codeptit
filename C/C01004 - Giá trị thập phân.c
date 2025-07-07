#include <stdio.h>
#include <stdint.h>
#include<math.h>
#define MAX 100
typedef long long ll;

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
    	int n;
    	scanf("%d", &n);
    	double d = (double)1 / n;
    	printf("%.15lf", d);
    	printf("\n");
	}
	return 0;
}

