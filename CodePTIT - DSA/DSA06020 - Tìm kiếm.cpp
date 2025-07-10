#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
	int n, x;
    cin >> n >> x;
    bool ok = false;
    for(int i = 0; i < n; i++){
    	int k;
    	cin >> k;
    	if(k == x){
    		ok = true;
		}
	}
	if(ok){
		cout << "1" << endl;
	}
	else cout << "-1" << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
	return 0;
}
