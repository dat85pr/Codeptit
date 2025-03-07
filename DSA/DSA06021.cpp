#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
	int n, x;
    cin >> n >> x;
    int dem;
    for(int i = 0; i < n; i++){
    	int k;
    	cin >> k;
    	if(k == x){
    		dem = i;
		}
	}
	cout << dem + 1 << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
	return 0;
}
