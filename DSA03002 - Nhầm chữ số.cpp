#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int min(int a){
	string s = to_string(a);
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '6'){
			s[i] = '5';
		}
	}
	return stoi(s);
}
int max(int a){
	string s = to_string(a);
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '5'){
			s[i] = '6';
		}
	}
	return stoi(s);
}
int main(){
	int a, b;
	cin >> a >> b;
	cout << min(a) + min(b) << " " << max(a) + max(b);
	return 0;
}