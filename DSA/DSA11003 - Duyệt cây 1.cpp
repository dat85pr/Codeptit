// Một số được gọi là lộc phát nếu chỉ có 2 chữ số 6 và 8. Cho số tự nhiên N. Hãy liệt kê các số lộc phát có không quá N chữ số. 
#include<bits/stdc++.h>
using namespace std;
int search(int in[], int x, int n){
    for(int i = 0; i < n; i++){
        if(in[i] == x){
            return i;
        }
    }
    return -1;
}
void postOder(int in[], int pre[], int n){
    int root = search(in, pre[0], n); // vi tri node goc tren mang in
    if(root != 0){
        postOder(in, pre + 1, root);
    }
    if(root != n - 1){
        postOder(in + root + 1, pre + root + 1, n - root - 1);
    }
    cout << pre[0] << " ";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int in[n], pre[n];
        for(int i = 0; i < n; i++){
            cin >> in[i];
        }
        for(int i = 0; i < n; i++){
            cin >> pre[i];
        }
        postOder(in, pre, n);
        cout << endl;
    }
}