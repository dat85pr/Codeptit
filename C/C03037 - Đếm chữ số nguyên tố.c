#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;
bool nt(int a){
	if(a < 2) return 0;
	for(int i = 2; i <= sqrt(a); i++){
		if(a % i == 0) return false;
	}
	return true;
}
int dem(ll a, int b){
	int dem = 0,c;
    while(a){
        c = a % 10;
        if(c == b) dem++;
        a /= 10;
    }
    return dem;
}
int main() {
	ll n;
	scanf("%lld", &n);
	for(int i = 2; i <= 7; i++){
		if(nt(i) && dem(n, i) != 0){
			printf("%d %d\n", i, dem(n, i));
		}
	}

	return 0;
}





