#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
void Try (int n, char A, char B, char C){ 
	if (n == 1){ 
		cout << A << " -> " << C << endl;
		return; 
	} 
	Try (n-1, A, C, B);
	cout << A << " -> " << C << endl; 
	Try (n-1, B, A, C); 
} 
int main(){ 
	int n; 
	cin >> n; 
	Try (n, 'A', 'B', 'C');
return 0; }
