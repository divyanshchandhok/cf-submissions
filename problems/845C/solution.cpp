#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif
#define int long long

void solve() {
    int n;
    cin >> n;
    multimap<int, int> programs;

    for(int i = 0; i < n; i++){
        int l, r;
        cin >> l >> r;
        programs.insert(make_pair(l, r));
    }
    int f = -1, s = -1;
    for(auto const& pair : programs){
        debug(pair, f, s);
        if(pair.first > f){
            f = pair.second;
        }
        else if(pair.first > s){
            s = pair.second;
        }
        else{
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    // cin.tie(0);

    // int t;
    // cin >> t;
    
    // while (t--) 
    solve();
}
