#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
typedef long long ll;

int main(){
    int t;
    scanf("%d", &t);
    getchar();
    while(t--){
    	char s[201];
		gets(s);
		int cnt = 1;
		for(int i = 0; i < strlen(s) - 1; i++){ 
			if(s[i] == ' ' && s[i + 1] != ' ') cnt++;
		}
		printf("%d\n", cnt);
	}
    return 0;
}