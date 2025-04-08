#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int min = INT_MAX;
    int tong = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            tong = a[i] + a[j];
            if(abs(tong) < abs(min)){
                min = tong;
            }
        }
    }
    cout << min << endl;

}
int main(){
    int T;
    cin >> T;
    while(T--)
        testcase();
    return 0;
}
