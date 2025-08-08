#include <stdio.h>
#include <stdint.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
int t = 1;
struct mathang{
	int ma;
	char ten[100];
	char nhom[100];
	double mua;
	double ban;
	double lai;
};
typedef struct mathang MH;
void nhap(MH a[], int n){
	for(int i = 0; i < n; i++){
		a[i].ma = t;
		scanf(" %[^\n]", a[i].ten);
		scanf(" %[^\n]", a[i].nhom);
		scanf("%lf %lf", &a[i].mua, &a[i].ban);
		a[i].lai = a[i].ban - a[i].mua;
		t++;
	}
}
void in(MH a){
	printf("%d %s %s %.2lf\n", a.ma, a.ten, a.nhom, a.lai);
}
int cmp(const void *a, const void *b){
	MH *x = (MH*)a;
	MH *y = (MH*)b;
	if(x->lai < y->lai) return 1;
	return -1;
}
int main(){
	int n;
	scanf("%d", &n);
	MH a[n];
	nhap(a, n);
	qsort(a, n, sizeof(MH), cmp);
	for(int i = 0; i < n; i++){
		in(a[i]);
	}
}
