#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
bool tn(char c[]){
	int l = 0, r = strlen(c) - 1;
	while(l <= r){
		if(c[l] != c[r]){
			return 0;
		}
		l++;
		r--;
	}
	return 1;
}
bool chan(char c[]){
	int l = 0;
	while(l < strlen(c)){
		if(c[l] == '1' || c[l] == '3' || c[l] == '7' || c[l] == '9' || c[l] == '5') return 0;
		l++;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[500];
		gets(c);
		if(chan(c) && tn(c)) printf("YES\n");
		else printf("NO\n");
	}
}

