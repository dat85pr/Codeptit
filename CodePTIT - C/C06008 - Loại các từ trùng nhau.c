#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>

int main(){
	char c[100];
	gets(c);
	char a[100][100];
	int n = 0;
	char *token = strtok(c, " ");
	while(token != NULL){
		strcpy(a[n], token);
		n++;
		token = strtok(NULL, " ");
	}
	printf("%s ", a[0]);
	for(int i = 1; i <= n - 1; i++){
		int ok = 1;
		for(int j = 0; j < i; j++){
			int x = strcmp(a[i], a[j]);
			if(x == 0) ok = 0;
		}
		if(ok) printf("%s ", a[i]);
	}
}
