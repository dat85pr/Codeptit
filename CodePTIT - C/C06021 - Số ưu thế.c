#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
bool check(char c[]){
	int odd = 0, even = 0;
	for(int i = 0; i < strlen(c); i++){
		if(c[i] == '0' || c[i] == '2' || c[i] == '4' || c[i] == '6' || c[i] == '8') even++;
		else odd++;
	}
	if(even > odd) return 1;
	return 0;
}
bool kt(char c[]){
	if(c[0] == '0') return 0;
	for(int i = 0; i < strlen(c); i++){
		if(c[i] < '0' || c[i] > '9') return 0;
	}
	return 1;
}
void testcase(){
	char c[1005];
	gets(c);
	if(!kt(c)){
		printf("INVALID\n");
		return;
	}
	if(check(c)){
		printf("YES\n");
	}
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
