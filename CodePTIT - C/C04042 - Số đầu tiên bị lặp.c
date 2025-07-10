#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
typedef long long ll;
void testcase(){
	int n;
	scanf("%d", &n);
	int a[100001];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] == a[j]){
				printf("%d\n", a[i]);
				return;
			}
		}
	}
	printf("NO\n");
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
    	testcase();
	}
    return 0;
}