#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		int j = i;
		while(j > 0 && a[j] < a[j - 1]){
			swap(a[j], a[j - 1]);
			j--;
		}
		cout << "Buoc " << i << ": ";
		for(int j = 0; j <=i; j++){
			cout << a[j] << " ";
		}
		cout << endl;
	}
}
int main(){
	testcase();
	return 0;
}
