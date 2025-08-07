#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
void nho(char c[]){
	for(int i = 0; i < strlen(c); i++){
		c[i] = tolower(c[i]);
	}
}
int main(){
	char c[500];
	gets(c);
	nho(c);
	char a[100][50];
	int n = 0;
	char *token = strtok(c, " ");
	while(token != NULL){
		strcpy(a[n], token);
		n++;
		token = strtok(NULL, " ");
	}
	int b[100] = {0};
	for(int i = 0; i < n; i++){
		if(b[i] == 0){
			int cnt = 1;
			for(int j = i + 1; j < n; j++){
				if(strcmp(a[i], a[j]) == 0){
					cnt++;
					b[j] = 1;
				}
			}
			printf("%s %d\n", a[i], cnt);
		}
	}
}
