#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
	string s;
	cin >> s;
	stack<int> st;
	for(int i = s.size() - 1; i >= 0; i--){
		if(s[i] == '+'){
			int x = st.top(); st.pop();
			int y = st.top(); st.pop();
			int z = x + y;
			st.push(z);
		}
		else if(s[i] == '-'){
			int x = st.top(); st.pop();
			int y = st.top(); st.pop();
			int z = x - y;
			st.push(z);
		}
		else if(s[i] == '*'){
			int x = st.top(); st.pop();
			int y = st.top(); st.pop();
			int z = x * y;
			st.push(z);
		}
		else if(s[i] == '/'){
			int x = st.top(); st.pop();
			int y = st.top(); st.pop();
			int z = x / y;
			st.push(z);
		}
		else{
			st.push(s[i] - '0');
		}	
	}
	cout << st.top() << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
		testcase();
	}
}