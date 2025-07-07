#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
typedef long long ll;
bool nt(int a){
	if(a < 2) return false;
	for(int i = 2; i <=  sqrt(a); i++){
		if(a % i == 0) return false;
	}
	return true;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	int n;
    scanf("%d", &n);
    int d = 0;
    for (int i = 1; i <= sqrt(n); i++)
        if (n % i == 0){
            if (i % 2 == 0)
                d++;
            if (n / i % 2 == 0)
                d++;
            if (i % 2 == 0 && i * i == n)
                d--;
        }
    printf("%d\n", d);
	}
	return 0;
}




