#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
	string s;
	cin >> s;
	stack<string> st;
	for(int i = s.size() - 1; i >= 0; i--){
		if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
			string a = "(" + st.top() + s[i];
			st.pop(); a += st.top() + ")";
			st.pop();
			st.push(a);
		}
		else st.push(string(1, s[i]));
	}
	cout << st.top() << endl;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		testcase();
	}
}