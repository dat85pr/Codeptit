#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
typedef long long ll;

int main(){
   	char c[100005]; 
	gets(c);
   	int cnt1 = 0, cnt2 = 0, cnt3 = 0;
   	for(int i = 0; i < strlen(c); i++){
   		if((c[i] >= 'a' && c[i] <= 'z' ) || (c[i] >= 'A' && c[i] <= 'Z')) cnt1++;
   		else if(c[i] >= '0' && c[i] <= '9') cnt2++;
   		else cnt3++;
	}
	printf("%d %d %d", cnt1, cnt2, cnt3);
    return 0;
}