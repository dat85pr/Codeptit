#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
int main(){
	char c[1000];
	gets(c);
	char c2[1000];
	gets(c2);
	char *token = strtok(c, " ");
	while(token != NULL){
		int x = strcmp(c2, token);
		if(x != 0){
			printf("%s ", token);
		}
		token = strtok(NULL, " ");
	}
}