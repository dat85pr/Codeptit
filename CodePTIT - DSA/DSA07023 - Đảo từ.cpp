#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void testcase(){
	string s;
    cin.ignore();
	getline(cin, s);
	stringstream ss(s);
	string word;
	stack<string> st;
	while(ss >> word){
		st.push(word);
	}
	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
}