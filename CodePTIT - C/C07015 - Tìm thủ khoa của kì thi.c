#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
float max = 0;
struct SinhVien{
	int ma;
	char ten[100];
	char ns[100];
	double d1, d2, d3;
	double tong;
};
typedef struct SinhVien SV;
void nhap(SV *a){
	getchar();
	gets(a->ten);
	gets(a->ns);
	scanf("%lf %lf %lf", &a->d1, &a->d2, &a->d3);
}
void in(SV a){
	printf("%d %s %s %.1lf\n", a.ma, a.ten, a.ns, a.tong);
}
int cmp(const void *a, const void *b){
	SV *x = (SV*)a;
	SV *y = (SV*)b;
	return x->tong < y->tong;
}
int main(){
	int n;
	scanf("%d", &n);
	SV a[n];
	for(int i = 0; i < n; i++){
		a[i].ma = i + 1;
		nhap(&a[i]);
		a[i].tong = a[i].d1 + a[i].d2 + a[i].d3;
		if(a[i].tong > max) max = a[i].tong;
	}
	qsort(a, n, sizeof(SV), cmp);
	for(int i = 0; i < n; i++){
		if(a[i].tong == max){
			in(a[i]);
		}
	}
}
