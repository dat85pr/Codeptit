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
	c[0] = toupper(c[0]);
}
void lon(char c[80]){
	for(int i = 0; i <= strlen(c); i++){
		c[i] = toupper(c[i]);
	}
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
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
		for(int i = 1; i <= n - 2; i++){
			printf("%s ", a[i]);	
		}
		printf("%s, ", a[n - 1]);
		lon(a[0]);
		printf("%s", a[0]);
		printf("\n");
	}
}
