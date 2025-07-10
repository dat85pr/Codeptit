#include<bits/stdc++.h> 
using namespace std;
int n, k; 
vector<char>tmp; 
void Try(int idx){
 	if(tmp.size()==k){
  		for(auto x : tmp) cout << x;
   		cout << endl; 
   		return;
    } 
	else{ 
		for(int i= idx+1; i<n; i++){
	 		tmp.push_back('A'+i); 
	 		Try(i); 
	 		tmp.pop_back(); 
	 	} 
	} 
} 
int main(){ 
	int t;
	cin >>t;
	while(t--){
	cin >> n >> k;
	Try(-1); 
	} 
}
