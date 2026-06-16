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

    vector<int> a;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }

    int maxl = 0, minb = LLONG_MAX;
    int diff = a[n-1] - a[0];
    for(int i = 0; i < n; i++){
        if(i != 0) maxl = max(maxl, a[i]);
        if(i != n-1){
            minb = min(minb, a[i]);
            diff = max(diff, a[i] - a[i+1]);
        }
    }

    diff = max({diff, maxl - a[0], a[n-1] - minb});

    cout << diff << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
