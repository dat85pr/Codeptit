// Ngăn xếp 1
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    string s;
    while(cin >> s){
        if(s == "push"){
            int x;
            cin >> x;
            v.push_back(x);
        }
        else if(s == "show"){
            if(v.empty()){
                cout << "empty" << endl;
                continue;
            }
            else{
                for(auto it : v){
                    cout << it << " ";
                }
                cout << endl;
            }
        }
        else if(s == "pop"){
            v.pop_back();
        }
    }
    return 0;
}

    