#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
	int t;
	cin >> t;
	cin.ignore();
	string s;
	deque<int> q;
	while(t--){
		cin >> s;
		if(s == "PUSHFRONT"){
			int x;
			cin >> x;
			q.push_front(x);
		}
		else if(s == "PRINTFRONT"){
			if(q.empty()){
				cout << "NONE\n";
			}
			else cout << q.front() << endl;
		}
		else if(s == "POPFRONT"){
			if(q.empty()) continue;
			else q.pop_front();
		}
		else if(s == "PUSHBACK"){
			int x;
			cin >> x;
			q.push_back(x);
		}
		else if(s == "PRINTBACK"){
			if(q.empty()){
				cout << "NONE" << endl;
			}
			else cout << q.back() << endl;
		}
		else if(s == "POPBACK"){
			if(q.empty()) continue;
			else  q.pop_back();
		}
	}
	
}
int main(){
	testcase();
}