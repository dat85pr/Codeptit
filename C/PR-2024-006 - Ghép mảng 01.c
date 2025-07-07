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
	int m, n;
    char q;
    scanf("%d %d %c", &m, &n, &q);
    int a[m], b[n], c[m + n];
    for(int i = 0; i < m; i++){
    	scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		scanf("%d", &b[i]);
	}
	int j = 0;
	for(int i = 0; i < m; i++){
		c[j] = a[i];
		j++;
	}
	for(int i = 0; i < n; i++){
		c[j] = b[i];
		j++;
	}
	for(int i = 0; i < j; i++){
		for(int h = i + 1; h < j; h++){
			if(c[i] > c[h]) swap(&c[h], &c[i]);
		}
	}
	if(q == 'T'){
		for(int i = 0; i < j; i++){
			printf("%d ", c[i]);
		}
	} 
	else if(q == 'G'){
		for(int i = j - 1; i >= 0; i--){
			printf("%d ", c[i]);
		}
	} 
	else if(q == 'F'){
		for(int i = 0; i < m; i++){
			printf("%d ", a[i]);
		}
		for(int i = 0; i < n; i++){
			printf("%d ", b[i]);
		}
	}
	else if(q == 'A'){
		for(int i = 0; i < n; i++){
			printf("%d ", b[i]);
		}
		for(int i = 0; i < m; i++){
			printf("%d ", a[i]);
		}
	}
	printf("\n");
}

int main() {
    int t;
	scanf("%d", &t);
	while(t--){
		testcase();
	}  
	return 0;
}