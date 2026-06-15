#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<vector<int>> grid(n);
    for(int i = 0; i < n - 1; i++){
        int x, y;
        cin >> x >> y;
        grid[x-1].push_back(y-1);
        grid[y-1].push_back(x-1);
    }
    bool leaves[n];
    int l = 0;
    memset(leaves, 0, sizeof(leaves));
    for(int i = 0; i < n; i++){
        if(grid[i].size() == 1){
            leaves[i] = true;
            l++;
        }
    }
    if(n == 2){
        cout << 0 << endl;
        return;
    }
    int m = LLONG_MIN;

    for(int i = 0; i < n; i++){
            int d = 0;
            for(int n : grid[i]){
                if(leaves[n]){
                    d++;
                }
            }
            m = max(m, d);
    }
    cout << l-m << endl;

}

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
}