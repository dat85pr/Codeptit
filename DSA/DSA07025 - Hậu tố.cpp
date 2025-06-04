#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
	int n;
	cin >> n;
	stack<ll> st;
	vector<string> v(n);
	for(auto &x : v) cin >> x;
	for(auto x : v){
		if(isdigit(x[0]) || x.size() > 1){
			st.push(stoi(x));
		}
		else{
			ll a = st.top(); st.pop();
			ll b = st.top(); st.pop();
			if(x == "+") st.push(a + b);
			else if(x == "-") st.push(b - a);
			else if(x == "*") st.push(a * b);
			else if(x == "/") st.push(b / a);
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
    return 0;
}
