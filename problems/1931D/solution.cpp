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
    int n, x, y;
    cin >> n >> x >> y;
    
    vector<int> a;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    int cnt = 0;
    map<pair<int, int>, int> mp;

    for(int i = 0; i < n; i++){
        cnt += mp[make_pair((x - (a[i] % x)) % x, a[i] % y)];
        mp[make_pair(a[i] % x, a[i] % y)]++;
    }
    cout << cnt << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
