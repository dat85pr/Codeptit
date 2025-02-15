#include<bits/stdc++.h>
using namespace std;
string s; int t;
void ktao(){
	getline(cin, s);
}
void sinh(){
	int i = s.size() - 1;
	while(i >= 0 && s[i] == '1'){
		s[i] = '0';
		i--;
	}
	s[i] = '1';
}
int main(){
	cin >> t;
	cin.ignore();
	while(t--){
		ktao();
		sinh();
		for(int i = 0; i < s.size(); i++){
			cout << s[i];
		}
		cout << endl;
	}
	return 0;
}
