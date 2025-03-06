#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
    int n, k;
    cin >> n >> k;
    int a[n];
    int dem = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n - 1; i++){
    	for(int j = i + 1; j < n; j++){
    		if(a[i] + a[j] == k){
    			dem++;
			}
		}
	}
	cout << dem << endl;
    
}
int main(){
    int t;
    cin >> t;
    while(t--)
        testcase();
    return 0;
}
