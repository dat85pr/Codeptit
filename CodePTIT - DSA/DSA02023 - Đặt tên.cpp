#include<bits/stdc++.h>
using namespace std;
int n, k, b[100];
int a[100];
set<string> se;
vector<string> v;
void result(){
	for(int i = 1; i <= k; i++){
		cout << v[a[i] - 1] << " ";
	}
	cout << endl;
}
void Try(int i){
	for(int j = a[i - 1] + 1; j <= se.size() - k + i; j++){
		a[i] = j;
		if(i == k){
			result();
		}
		else Try(i + 1);
	}
}

int main(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin.ignore();
		string a;
		cin >> a;
		se.insert(a);
	}
    for(auto x : se){
        v.push_back(x);
    }
	Try(1);
	return 0;
}
