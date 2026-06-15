#include <bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int n, m;
    cin >> n >> m;
    unordered_map<int, multiset<int>> colours_x;
    unordered_map<int, multiset<int>> colours_y;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int x;
            cin >> x;
            
            colours_x[x].insert(i);
            colours_y[x].insert(j);
        }
    }
    int total = 0;
    
    for(const auto& [key, value] : colours_x){
        int id = 1;
        // cout << key << endl;
        if(value.size() == 1) continue;
        for(int e : value){
            total += (2*id - value.size() - 1) * e;
            id += 1;
        }
        // cout << total << endl;
    }

    for(const auto& [key, value] : colours_y){
        int id = 1;
        if(value.size() == 1) continue;
        for(int e : value){
            total += (2*id - value.size() - 1) * e;
            id += 1;
        }
        
    }
    cout << total << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--) 
    solve();
}
