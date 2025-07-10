#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;
bool nt(ll a){
	if(a < 2) return false;
	for(int i = 2; i <= sqrt(a); i++){
		if(a % i == 0) return false;
	}
	return true;
}
void solve()
{
    ll n;
    scanf("%lld", &n);
    ll res;
    for (ll i = 1; i <= sqrt(n); i++){
        if (n % i == 0){
            if (nt(n / i)){
                printf("%lld\n", n / i);
                return;
            }
            if (nt(i))
                res = i;
        }
    }
    printf("%lld\n", res);
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		solve();	
	}
	return 0;
}




