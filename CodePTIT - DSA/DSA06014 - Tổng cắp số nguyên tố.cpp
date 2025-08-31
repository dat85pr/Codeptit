#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool nt(int a){
	if(a < 2) return 0;
	for(int i = 2; i <= sqrt(a); i++){
		if(a % i == 0) return 0;
	}
	return 1;
}
void testcase(){
    int n;
    cin >> n;
    for(int i = 2; i <= n; i++){
    	if(nt(i) && nt(n - i)){
    		cout << i << " " << n - i << endl;
    		return;
		}
		if(i > sqrt(n) + 1){
			cout << "-1" << endl;
			return;
		}
	}
}
int main(){
    int T;
    cin >> T;
    while(T--)
        testcase();
    return 0;
}
