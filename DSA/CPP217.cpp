// so nho nhat thu k cua ma tran
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void testcase(){
	int n, k;
	cin >> n >> k;
	int h = n * n;
	int a[h];
	for(int i = 0; i < h; i++){
		cin  >> a[i];
	}
	sort(a, a + h);
	cout << a[k - 1] << endl;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
	return 0;
}