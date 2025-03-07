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
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[i]){
				swap(a[i], a[j]);
			}
		}
		cout << "Buoc " << i + 1 << ": ";
		for(auto x : a){
			cout << x << " ";
		}
		cout << endl;
	}
}
int main(){
	testcase();
	return 0;
}
