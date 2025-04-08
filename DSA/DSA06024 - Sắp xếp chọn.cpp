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
		int min_pos = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min_pos]){
				min_pos = j;
			}
		}
		swap(a[i], a[min_pos]);
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
