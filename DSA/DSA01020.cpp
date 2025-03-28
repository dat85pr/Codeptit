#include <bits/stdc++.h>

using namespace std;
string s;
void ktao(){
	cin.ignore();
	cin >> s;
}
void in(){
	cout << s;
	cout << endl;
}
void sinh(){
	int i = s.size() - 1;
	while(i >= 0 && s[i] == '0'){
		s[i--] = '1';
	}
	if(i > 0){
	    s[i] = '0';
	}
}
int main() {
    int t;
    cin >> t;
    while(t--){
    	ktao();
    	sinh();
    	in();
	}
    return 0;
}
