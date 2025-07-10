#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void testcase(){
	int n;
    cin >> n;
    vector<int> a(n), le, chan;
    for(int i = 0; i < n ; i++){
        cin >> a[i];
        if(i % 2 == 0) chan.push_back(a[i]);
        else le.push_back(a[i]);
    }
    sort(chan.begin(), chan.end());
    sort(le.rbegin(), le.rend());
    int c = 0, l = 0;
    for(int i = 0; i < n ; i++){
        if(i % 2 == 0) cout << chan[l++] << " ";
        else cout << le[c++] << " ";
    }
}
int main(){
	testcase();
	return 0;
}
