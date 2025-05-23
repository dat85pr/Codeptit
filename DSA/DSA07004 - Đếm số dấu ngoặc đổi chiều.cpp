#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		int cnt = 0;
		while(s.size()){
			int x = s.find("()");
			if(x == -1){
				if(s[0] == ')'){
					cnt++;
					s[0] = '(';
				}
				if(s[s.size() - 1] == '('){
					cnt++;
					s[s.size() - 1] = ')';
				}
			}
			else s.erase(x, 2);
		}
		cout << cnt << endl;
	}	
}