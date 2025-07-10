#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k, dem = 0;
        cin >> n >> k;
        vector<int> a(k);
        set<int> se;
        for(auto &x : a){
            cin >> x;
            se.insert(x);
        }
        int i = k - 1;
        while (i >= 0 && a[i] == (n - k + i + 1)){
            i--;
        }
        if(i < 0){
            dem = k;
        } else {
            a[i] ++;
            for(int j = i + 1; j < k; j++)
                a[j] = a[j - 1] + 1;
            for(int j = i; j < k; j++){
                if(se.count(a[j]) == 0) dem++;
            }
        }
        cout << dem << endl;
    }
    return 0;
}
