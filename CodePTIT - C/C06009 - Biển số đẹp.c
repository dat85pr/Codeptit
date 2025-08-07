#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
bool check(char s[])
{
    if (s[1] == s[2] && s[2] == s[3] && s[4] == s[5])
        return 1;
    if (s[1] < s[2] && s[2] < s[3] && s[3] < s[4] && s[4] < s[5])
        return 1;
    for (int i = 1; i <= 5; i++)
        if (s[i] != '6' && s[i] != '8')
            return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s[20];
		gets(s);
		char str[10] = {'#', s[6], s[7], s[8], s[10], s[11]};
		if(check(str)) printf("YES\n");
		else printf("NO\n");
	}
}
