#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#define MAX 100
bool nt(int a){
	if(a <= 2) return true;
	for(int i = 2; i <= sqrt(a); i++){
		if(a % i == 0) return false;
	}
	return true;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		int a;
		scanf("%d", &a);
		int dem = 0;
		for(int i = 1; i <= sqrt(a); i++){
            if(a % i == 0){
                if (i % 2 == 0)
                    dem++;
                if ((a / i) % 2 == 0)
                    dem++;
                if (i * i == a && i % 2 == 0)
                    dem = dem - 1;
            }
        }
		printf("%d\n", dem);
	}
	return 0;
}

