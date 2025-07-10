#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[100];
bool check, ok[100];
int s;
int dem = 0;
void Try(int sum, int dem){
	if(check == true){
		return;
	}
	if(dem == k){
		check = true;
		return;
	}
	for(int i = 1; i <= n; i++){
		if(ok[i] == false){
			ok[i] = true;
			if(sum == s){
				Try(0, dem + 1);
				return;
			}
			if(sum > s){
				return;
			}
			else{
				Try(sum + a[i], dem);
			}
		}
		ok[i] = false;
	}
}
int main() {
    int t;
    cin >> t;
    while(t--){
    	s = 0;
    	check = false;
    	cin >> n >> k;
    	for(int i = 1; i <= n; i++){
    		cin >> a[i];
    		ok[i] = false;
    		s += a[i];
		}
		if(s % k != 0){
			cout << "0" << endl;
		}
		else{
			s /= k;
			Try(0, 0);
			if(check == true){
				cout << "1" << endl;	
			}
			else cout << "0" << endl;
		}
		
	}
    return 0;
}
