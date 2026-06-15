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
    bool flag = 1;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if((x >> __builtin_ctzll(x)) != ((i+1) >> __builtin_ctzll(i+1))){
            flag = 0;
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
