#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;
ll a[1001];
void sang(){
	a[0] = 0, a[1] = 1, a[2] = 1;
	for(int i = 3; i <= 92; i++){
		a[i] = a[i - 1] + a[i - 2];
	}
}
int main() {
	int t;
	scanf("%d", &t);
	sang();
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%lld\n", a[n]);
	}
	return 0;
}





