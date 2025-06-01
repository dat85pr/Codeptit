#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void testcase(){
	string s;
	cin >> s;
	stack<string> st;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
			string a = st.top(); st.pop();
			string b = st.top(); st.pop();
			string c = "(" + b + s[i] + a + ")";
			st.push(c);
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