#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll F[93];
void testcase(){
	ll n, i;
	cin >> n >> i;
	while(n > 2){
		if(i <= F[n - 2]){
			n -= 2;
		}
		else{
			i -= F[n - 2];
			n -= 1;
		}
	}
	if(n == 1){
		cout << "A";
	}
	else{
		cout << "B";
	}
	cout << endl;
}
int main() {
	F[1] = 1, F[2] = 1;
	for(int i = 3; i <= 92; i++){
		F[i] = F[i - 1] + F[i - 2];
	}
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
    return 0;
}
