#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void testcase(){
	ll n;
	cin >> n;
	queue<ll> q;
	q.push(1);
	while(1){
		ll top = q.front();
		if(q.front() % n == 0){
			cout << q.front() << endl;
			break;
		}
		q.pop();
		q.push(top * 10);
		q.push(top * 10 + 1);
	}
}
int main(){
    int t;
    cin >> t;
    while(t--){
    	testcase();
	}
}