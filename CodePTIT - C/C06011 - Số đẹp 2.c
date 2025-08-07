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
bool ktra(char c[]){
	int l = 0;
	int tong = 0;
	while(l < strlen(c)){
		tong += c[l] - '0';
		l++;
	}
	if(tong % 10 == 0) return 1;
	return 0;
}
bool check(char c[]){
	int x = strlen(c) - 1;
	if(c[0] == '8' && c[x] == '8') return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[500];
		gets(c);
		if(ktra(c) && tn(c) && check(c)) printf("YES\n");
		else printf("NO\n");
	}
}
