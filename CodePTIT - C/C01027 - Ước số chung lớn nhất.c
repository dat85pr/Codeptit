#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#define MAX 100
int ucln(int a, int b){
   if(a == 0 || b == 0){
      return a + b;
   }
   while(a != b){
      if(a > b){
         a = a - b; 
      }
      else{
         b = b - a; 
      }
   }
   return a;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", ucln(a, b));
		
	}
	return 0;
}

