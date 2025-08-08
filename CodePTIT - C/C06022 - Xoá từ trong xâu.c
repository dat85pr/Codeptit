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
bool cmp(char a[], char b[]){
	char s1[205];
	char s2[205];
	strcpy(s1, a);
	strcpy(s2, b);
	nho(s1);
	nho(s2);
	if(strcmp(s1, s2) == 0) return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	int k = 1;
	while(t--){
		char s1[205];
		char s2[205];
		gets(s1);
		gets(s2);
		nho(s2);
		char a[205][205];
		int n = 0;
		printf("Test %d: ", k);
		char *token = strtok(s1, " ");
		while(token != NULL){
			strcpy(a[n], token);
			n++;
			token = strtok(NULL, " ");
		}
		for(int i = 0; i < n; i++){
			if(!cmp(a[i], s2)) printf("%s ", a[i]);
		}
		printf("\n");
		k++;
	}
}
