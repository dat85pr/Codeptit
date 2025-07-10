#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
	int t;
	cin >> t;
	queue<int> q;
	while(t--){
		int n;
		cin >> n;
		if(n == 1){
			cout << q.size() << endl;
		}
		else if(n == 2){
			if(q.empty()){
				cout << "YES" << endl;
			}
			else cout << "NO" << endl;
		}
		else if(n == 3){
			int x;
			cin >> x;
			q.push(x);
		}
		else if(n == 4){
			if(q.empty()){
				continue;
			}
			else q.pop();
		}
		else if(n == 5){
			if(q.empty()){
				cout << "-1" << endl;
			}
			else cout << q.front() << endl;
		}
		else if(n == 6){
			if(q.empty()){
				cout << "-1" << endl;
			}
			else cout << q.back() << endl;
		}
	}
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testcase();
	}

}