#include <bits/stdc++.h>
using namespace std;
int a[100], b[100], c[100], n, k, m, cnt = 1;
void kq(){
	int cnt = 0;
	for(int i = 1;i <= m; i++){
		if(b[i] == 1){
			++cnt;
		    if(cnt != k) cout << c[i] << " ";
		    else cout << c[i] << endl;
		}
	}
}
void Try(int i){
	b[i] = 1;
	for(int j = i+1;j <= m;j++){
		++cnt;
		if(cnt % k == 0){
			b[j] = 1;
			kq();
		}
		else{
			Try(j);
		}
		b[j] = 0;
		cnt -= 1;
	}
	b[i] = 0;
}
int main(){
	cin >> n >> k;
	memset(b,0,sizeof(b));
	set<int> s;
	for(int i = 1;i <= n; i++){
		cin >> a[i];
		s.insert(a[i]);
	}
	int dem = 1;
	for(auto x : s){
		c[dem] = x;
		++dem;
	}
	m = dem-1;
	for(int i = 1;i <= m - k + 1; i++){
		Try(i);
	}
}
