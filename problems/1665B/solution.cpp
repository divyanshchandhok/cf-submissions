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

    map<int, int> mp;
    int ml = 0;
    
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        mp[x]++;
        ml = max(ml, mp[x]);
    }

    int ops = n - ml;
    ops += ceil(log2((double)n / ml));

    cout << ops << endl;
    
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
