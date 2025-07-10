#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
	int t ; 
	cin >> t; 
	while(t--){ 
		int D; 
		cin >> D;
		string s; 
		cin >> s; 
		map<char,int> mp; 
		for(char c : s){
			mp[c]++; 
		} 
		int k = 0; 
		for(auto x : mp){ 
			k = max(k, x.second); 
		} 
		int n = s.size(); 
		if(k - (n - k) / (D - 1) <= 1){
			cout <<"1\n";
		}
		else cout <<"-1\n";
	} 
}