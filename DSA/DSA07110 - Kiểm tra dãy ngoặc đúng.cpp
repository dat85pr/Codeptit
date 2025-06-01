#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    unordered_map<char, char> mp = {{')', '('},   {'}', '{'},   {']', '['}};
    while (t--){
        string s;
        cin >> s;
        stack<char> st;
        for(auto x : s){
            if(x == '(' || x == '{' || x == '[') st.push(x);
            else if(!st.empty()){
                if(mp[x] == st.top()) st.pop();
            }
        }
        if(st.empty()){
        	cout << "YES" << endl;
		}
		else cout << "NO" << endl;
    }
    return 0;
}