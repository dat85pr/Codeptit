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

int main(){
    int n;
    scanf("%d", &n);
    int a[101];
    for(int i = 0; i < n; i++){
    	scanf("%d", &a[i]);
	}
	int cnt = 0;
	for(int i = 0; i < n; i++){
		int min = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min]){
				min = j;
			}
		}
		swap(&a[i], &a[min]);
		if(cnt < n - 1){
			for(int j = 0; j < n; j++){
				printf("%d ", a[j]);
			}
			printf("\n");
		}
		cnt++;
	}
    return 0;
}