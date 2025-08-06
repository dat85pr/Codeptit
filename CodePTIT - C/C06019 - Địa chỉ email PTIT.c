#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
void nho(char c[80]){
	for(int i = 0; i <= strlen(c); i++){
		c[i] = tolower(c[i]);
	}
}

int main(){
	char c[80];
	gets(c);
	char a[6][10];
	int n = 0;
	char *token = strtok(c, " ");
	while(token != NULL){
		nho(token);
		strcpy(a[n], token);
		n++;
		token = strtok(NULL, " ");
	}
	for(int i = 0; i <= n - 2; i++){
		printf("%c", a[i][0]);
	}
	printf("%s", a[n - 1]);
	printf("@ptit.edu.vn");
}
