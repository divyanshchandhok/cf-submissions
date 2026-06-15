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
    int n, q, x, mv = LLONG_MIN;
    cin >> n >> q;
    vector<int> a, b, maxvals(n+1);
    maxvals[0] = 0;

    for(int i = 0; i < n; i++){
        cin >> x;
        a.push_back(x);
    }
    
    for(int i = 0; i < n; i++){
        cin >> x;
        b.push_back(x);
    }

    for(int i = n - 1; i >= 0; i--){
        mv = max({mv, a[i], b[i]});
        maxvals[i+1] = mv;
    }

    for(int i = 1; i <= n; i++){
        maxvals[i] += maxvals[i-1];
    }
    debug(maxvals);
    for(int i = 0; i < q; i++){
        int l, r;
        cin >> l >> r;
        cout << maxvals[r] - maxvals[l-1] << " ";
    }
    cout << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
