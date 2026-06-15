#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m;
    cin >> n >> m;
    int grid[n+2][m+2];
    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < m+1; j++){
            cin >> grid[i][j];
        }
    }
    for(int i = 0; i < n+2; i++){
        grid[i][0] = -1;
    }
    for(int i = 0; i < n+2; i++){
        grid[i][m+1] = -1;
    }
    for(int i = 0; i < m+2; i++){
        grid[0][i] = -1;
    }
    for(int i = 0; i < m+2; i++){
        grid[n+1][i] = -1;
    }

    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < m+1; j++){
            if((grid[i][j] > grid[i-1][j]) && (grid[i][j] > grid[i+1][j]) && (grid[i][j] > grid[i][j-1]) && (grid[i][j] > grid[i][j+1])){
                grid[i][j] = max({grid[i-1][j], grid[i+1][j], grid[i][j-1], grid[i][j+1]});
            }
        }
    }
    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < m+1; j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
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