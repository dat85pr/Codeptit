#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + n);
    int r = 0, l = 0;
    for(int i = 0; i < n; i++){
    	if(b[i] != a[i]){
    		l = i;
    		break;
    		
		}
	}
	for(int i = n - 1; i >= 0; i--){
		if(b[i] != a[i]){
    		r = i;
    		break;
		}
	}
	cout << l + 1 << " " << r + 1 << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        testcase();
    return 0;
}
