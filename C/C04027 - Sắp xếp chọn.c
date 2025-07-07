#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
typedef long long ll;
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void testcase(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int cnt = 1;
	for(int i = 0; i < n; i++){
		if(cnt < n){
			int min_pos = i;
			for(int j = i + 1; j < n; j++){
				if(a[j] < a[min_pos]){
					min_pos = j;
				}
			}
			swap(&a[i], &a[min_pos]);
			printf("Buoc %d: ", cnt);
			for(int i = 0; i < n; i++){
				printf("%d ", a[i]);
			}
			printf("\n");
			cnt++;
		}
	}
}

int main() {
	testcase(); 
	return 0;
}