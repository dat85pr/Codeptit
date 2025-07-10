#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
typedef long long ll;
int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
void testcase(){
	int n;
	scanf("%d", &n);
	int cnt = 0;
	for(int i = 0; i < 10; i++){
		while(n >= a[i]){
			cnt++;
			n -= a[i];
		}
	}
	printf("%d\n", cnt);
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
    	testcase();
	}
    return 0;
}