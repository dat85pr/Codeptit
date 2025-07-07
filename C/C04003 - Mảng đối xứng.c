#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		bool ok = true;
		for(int i = 0; i < n; i++){
			if(a[i] != a[n - i - 1]){
				ok = false;
			}
		}
		if(ok){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}

	return 0;
}





