#include <bits/stdc++.h>
using namespace std;

#define maxn 105

vector<vector<int>> a(maxn, vector<int>(maxn));
vector<set<int>> dske(maxn);
vector<int> path(maxn), res;
vector<bool> vis(maxn, false);

int V, u;
int MIN = INT_MAX;
int sum = 0;

void Hamilton(int i) {
    for(int j = 1; j <= V; j++) {
        if(!vis[j] && a[path[i - 1]][j] != 10000 && a[path[i - 1]][j]) {
            vis[j] = true;
            path[i] = j;
            sum += a[path[i - 1]][j];
            // for(int x : path) cout << x << " ";
            // cout << endl;

            if(i == V + 1) {
                if(path[1] == path[i]) {
                    if(sum < MIN) {
                        res = path;
                        MIN = sum;
                    }
                }
            }
            else if(i <= V) Hamilton(i + 1);
            sum -= a[path[i - 1]][j];
            vis[j] = false;
        }
    }
}

int main() {
    // freopen("CT.INP", "r", stdin);
	// freopen("CT.OUT", "w", stdout);
    cin >> V >> u;
    
    for(int i = 1; i <= V; i++) {
        for(int j = 1; j <= V; j++) cin >> a[i][j];
    }

    path[1] = u;
    
    Hamilton(2);
    
    if(res.size() > 0) {
        cout << MIN << endl;
        for(int i = 1; i <= V + 1; i++) cout << res[i] << " ";
    }
    else cout << "0" << endl;
    return 0;
}