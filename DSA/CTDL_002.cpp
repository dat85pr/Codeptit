#include <bits/stdc++.h>
using namespace std;
int a[100], b[100], n, N, cnt=0;
void kq(){
	for(int i=1;i<=n;i++){
		if(b[i]==1){
			cout << a[i] << " ";
		}
	}
	cout << endl;
}
void Try(int i, int sum){
	b[i]=1;
	for(int j=n;j>=i+1;j--){
		if(a[j]<N){
			b[j]=1;
			sum+=a[j];
			if(sum==N){
				kq();
				++cnt;
			}
			else if(sum<N){
			    Try(j,sum);
			}
			b[j]=0;
			sum-=a[j];
		}
	}
	b[i]=0;
}
int main(){
	cin >> n >> N;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	if(binary_search(a+1,a+n+1,N)){
		cout << N << endl;
		++cnt;
	}
	for(int i=1;i<=n;i++) b[i]=0;
	for(int i=n;i>=1;i--){
		    int sum=a[i];
		    Try(i,sum);
	}
	cout << cnt;
}
