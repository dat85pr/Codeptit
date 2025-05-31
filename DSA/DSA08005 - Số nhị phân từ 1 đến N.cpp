#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<string> res;

void init(){
	queue<string> q;
	q.push("1");
	res.push_back("1");
	while(res.size() <= 10000){
		string s = q.front();
		q.pop();
		res.push_back(s + "0");
		res.push_back(s + "1");
		q.push(s + "0");
		q.push(s + "1");
	}	
}
void testcase(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cout << res[i] << " ";
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	init();
	while(t--){
		testcase();
	}

}