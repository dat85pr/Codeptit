#include <bits/stdc++.h>
using namespace std;

void testcase(){
	int k;
	string s;
	cin >> k;
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		char Max = s[s.size() - 1];
		int vt = s.size() - 1;
		for(int j = s.size() - 1; j > i && k > 0; j--){
			if(Max < s[j]){
				Max = s[j];
				vt = j;
			}
		}
		if(Max > s[i] && k > 0){
			k--;
			swap(s[i], s[vt]);
		}
	}
	cout << s << endl;	
}
int main() {
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
    return 0;
}
