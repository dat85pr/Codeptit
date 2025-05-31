#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
	int t;
	cin >> t;
	cin.ignore();
	string s;
	queue<int> q;
	while(t--){
		cin >> s;
		if(s == "PUSH"){
			int x;
			cin >> x;
			q.push(x);
		}
		else if(s == "PRINTFRONT"){
			if(q.empty()){
				cout << "NONE\n";
			}
			else cout << q.front() << endl;
		}
		else if(s == "POP"){
			if(q.empty()){
				continue;
			}
			else{
				q.pop();
			}
		}
	}
	
}
int main(){
	testcase();
}