#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
    int n;
    cin >> n;
    int a[n];
    set<int> s;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    for(auto x : a){
    	cout << x << " ";
	}
	cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        testcase();
    return 0;
}
