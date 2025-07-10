#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool checkk (vector <int> & a, int n){ 
	if (a[0] != 1 || a[n-1] != 0) return 0; 
	for (int i = 0; i < n-1; i++){ 
		if (a[i] == 1 && a[i+1] == 1) 
		return 0; 
	} 
	for (int i = 0; i < n-3; i++){
 		if (a[i] == 0 && a[i+1] == 0 && a[i+2] == 0 && a[i+3] == 0){
  			return 0; 
  		} 
	} 
  	return 1; 
} 
int main (){
   int n; 
   cin >> n; 
   vector <int> bin (n, 0);
    while (true){
		if (checkk(bin, n)){
	  		for (auto x : bin){ 
	  			if (x == 1) cout << 8; else cout << 6;
	   		} 
	   		cout << endl;
	    } 
		int i = n - 1;
		while (i >= 0 && bin[i] == 1){ 
			bin[i] = 0; i--;
		} 
		if (i < 0) break; 
		bin[i] = 1; 
	} 
	return 0; 
}
