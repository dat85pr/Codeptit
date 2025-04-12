#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
bool chuaxet[100];
int a[100];
void ktao(){
	cin >> s;
	sort(s.begin(), s.end());
}
void result(){
	for(int i = 1; i <= s.size(); i++){
		cout << s[a[i]];
	}
	cout << " ";
}
void Try(int i){
	for(int j = 0; j < s.size(); j++){
		if(!chuaxet[j]){
			a[i] = j;
			chuaxet[j] = true;
			if(i ==  s.size()){
				result();
			}
			else{
				Try(i + 1);
			}
			chuaxet[j] =  false;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ktao();
		Try(1);
		cout << endl;
	}
	return 0;
}
