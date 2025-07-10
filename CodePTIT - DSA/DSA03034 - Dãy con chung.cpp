#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void findd (vector<int>&a, vector<int>&b, vector<int>&c){ 
	int i = 0, j = 0, k = 0; 
	vector <int> res; 
	while (i<a.size() && j<b.size() && k<c.size()){ 
		if(a[i] == b[j] && b[j] == c[k]){ 
			res.push_back(a[i]); 
			i++, j++, k++;
		} 
		else if (a[i] < b[j]) i++; 
		else if (b[j] < c[k]) j++; 
		else k++;
	}
	if(res.empty()) cout << "NO";	
	else{ 
		for(auto it : res){
 			cout << it <<" ";
 		}
	} 
}
void testcase(){
	int n, m , k;
	cin >> n >> m >> k;
	vector<int> a(n), b(m), c(k);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}
	for(int i = 0; i < k; i++){
		cin >> c[i];
	}
	findd(a, b, c);
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
	return 0;
}
