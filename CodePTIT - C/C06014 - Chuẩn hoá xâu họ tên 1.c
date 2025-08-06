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

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[80];
		gets(c);
		char *token = strtok(c, " ");
		while(token != NULL){
			nho(token);
			printf("%s ", token);
			token = strtok(NULL, " ");
		}
		printf("\n");
	}
}
