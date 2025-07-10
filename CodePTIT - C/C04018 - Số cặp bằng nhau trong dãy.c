#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n], cnt = 0;
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n - 1; i++){
			if(a[i] == a[i + 1]) cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}





