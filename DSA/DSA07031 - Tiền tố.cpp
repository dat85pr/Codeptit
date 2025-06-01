#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void testcase(){
	int n;
	cin >> n;
	vector<string> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	stack<ll> st;
	for(int i = n - 1; i >= 0; i--){
		if(isdigit(v[i][0]) || v[i][0] == '-' && v[i].size() > 1){
			st.push(stoll(v[i]));
		}
		else{
			ll a = st.top(); st.pop();
			ll b = st.top(); st.pop();
			if(v[i] == "+"){
				st.push(a + b);
			}
			else if(v[i] == "-"){
				st.push(a - b);
			}
			else if(v[i] == "*"){
				st.push(a * b);
			}
			else if(v[i] == "/"){
				st.push(a / b);
			}
		}
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