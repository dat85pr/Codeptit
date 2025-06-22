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
	sort(a, a + n);
	int min1 = INT_MAX;
	for(int i = 1; i < n; i++){
		min1 = min(min1, a[i] - a[i - 1]);
	}
	cout << min1 << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
	return 0;
}
