#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
void sx(char a[][50], int n){
	for(int i = 0; i < n; i++){
		int min = i;
		for(int j = i + 1; j < n; j++){
			if(strcmp(a[j], a[min]) < 0) min = j;
		}
		char tmp[100];
		strcpy(tmp, a[min]);
		strcpy(a[min], a[i]);
		strcpy(a[i], tmp);
	}
}
int main(){
	char s1[100];
	char s2[100];
	gets(s1);
	gets(s2);
	char a[50][50];
	char b[50][50];
	int n = 0, m = 0;
	char *token1 = strtok(s1, " ");
	while(token1 != NULL){
		strcpy(a[n], token1);
		n++;
		token1 = strtok(NULL, " ");
	}
	char *token2 = strtok(s2, " ");
	while(token2 != NULL){
		strcpy(b[m], token2);
		m++;
		token2 = strtok(NULL, " ");
	}
	sx(a, n);
	for(int i = 0; i < n; i++){
		int ok = 0;
		for(int j = 0; j < m; j++){
			if(strcmp(a[i], b[j]) == 0) ok = 1;
		}
		if(!ok && strcmp(a[i], a[i + 1]) != 0) printf("%s ", a[i]);
	}
}
