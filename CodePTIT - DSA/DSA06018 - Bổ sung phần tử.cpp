#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
	int n;
    cin >> n;
    set<int> a;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.insert(x);
    }
    cout << (*a.rbegin() - *a.begin() + 1) - a.size() << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
	return 0;
}
