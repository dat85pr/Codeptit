#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
bool check(char c[]){
	int dd[10] = {0};
	int ok = 0;
	for(int i = 0; i < strlen(c); i++){
		dd[c[i] - '0']++;
		if(c[i] == '0') ok = 1;
	}
	if(!ok) return 0;
	for(int i = 1; i <= 9; i++){
		if(dd[i] == 0) return 0;
	}
	return 1;
}
bool kt(char c[]){
	if(c[0] == '0') return 0;
	for(int i = 0; i < strlen(c); i++){
		if(c[i] < '0' || c[i] > '9') return 0;
	}
	return 1;
}
void testcase(){
	char c[1000];
	gets(c);
	if(!kt(c)){
		printf("INVALID\n");
		return;
	}
	if(check(c)) printf("YES\n");
	else printf("NO\n");
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		testcase();
	}
}
