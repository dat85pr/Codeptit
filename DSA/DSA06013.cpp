#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
    int n, k;
    cin >> n >> k;
    int dd[10000001] = {0};
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        dd[x]++;
    }
    if(dd[k] != 0){
    	cout << dd[k] << endl;
	}
	else cout << "-1" << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--)
        testcase();
    return 0;
}
