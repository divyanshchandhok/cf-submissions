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
    vector<int> f;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        f.push_back(x);
    }

    vector<int> diff;

    for(int i = 0; i < n - 1; i++){
        diff.push_back(f[i] - f[i+1]);
    }

    int s = (f[0] + f[n-1]) / (n-1);

    cout << (s - diff[0]) / 2 << " ";

    for(int i = 0; i < n-2; i++){
        cout << (diff[i] - diff[i+1]) / 2 << " ";
    }

    cout << (diff[n-2] + s) / 2 << endl;;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
