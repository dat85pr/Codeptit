#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void testcase(){
	ll n;
	cin >> n;
	queue<ll> q;
	ll cnt = 0;
	q.push(1);
	while(q.front() <= n){
		ll top = q.front();
		q.pop();
		cnt++;
		q.push(top * 10);
		q.push(top * 10 + 1);
	}
	cout << cnt << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
    	testcase();
	}
}