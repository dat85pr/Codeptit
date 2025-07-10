#include<bits/stdc++.h>
using namespace std;

int main(){
	int q;
	cin >> q;
	string s;
	vector<int> v;
	while(q--){
		cin >> s;
		if(s == "PUSH"){
			int x;
			cin >> x;
			v.push_back(x);
		}
		else if(s == "PRINT"){
			if(v.size() == 0){
				cout << "NONE" << endl;
			}
			else{
				cout << v[v.size() - 1] << endl;
			}
		}
		else if(s == "POP"){
			if(v.size() == 0){
				continue;
			}
			else{
				v.pop_back();
			}
		}
	}
}