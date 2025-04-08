#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    for(int i = n - 1; i > n - 1 - k; i--){
    	cout << a[i] << " ";
	}
	cout << endl;

}
int main(){
    int T;
    cin >> T;
    while(T--)
        testcase();
    return 0;
}
