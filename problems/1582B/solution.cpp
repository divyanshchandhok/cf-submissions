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
    int o = 0, z = 0;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x == 1) o++;
        if(x == 0) z++;
    }

    cout << (o << z) << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
