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
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] > a[j]) swap(&a[i], &a[j]);
		}
	}
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0) printf("%d ", a[i]);
	}
	for(int i = 0; i < n; i++){
		if(a[i] % 2 != 0) printf("%d ", a[i]);
	}
}

int main() {
	testcase(); 
	return 0;
}