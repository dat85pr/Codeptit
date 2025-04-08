#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
	int n;
	cin >> n;
	set<int> se;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		se.insert(x);
	}
	if(se.size() < 2){
		cout << "-1" << endl;
	}
	else{
		auto it = se.begin();
		cout << *it << " ";
		it++;
		cout << *it << endl;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
	return 0;
}
