// check thừa dấu "(" va ")"
#include<bits/stdc++.h>
using namespace std;
bool check(string s){ 
    int cnt1 = 0, cnt2 = 0; 
	for (char x : s){ 
		if(x == '+' || x == '-') ++cnt1;
 		if(x == '(') ++cnt2; 
 	} 
 	return cnt1 != cnt2; 
}
int main(){
	int t;
	cin >> t;
    cin.ignore();
	while(t--){
        string s;
        getline(cin, s);
        if(check(s)){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
	}	
}