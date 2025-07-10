#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    set<int> s;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        s.insert(a[i]);
    }
    sort(a, a + n);
    for(int i = 0; i < m; i++){
        cin >> b[i];
        s.insert(b[i]);
    }
    sort(b, b + m);
    for(auto x : s){
        cout << x << " ";
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i] == b[j]) cout << a[i] << " ";
        }
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
