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
    int l = lcm(x, y);
    int ln = n / l;
    int xn = (n / x) - ln;
    int yn = (n / y) - ln;
    int ans = 0;
    ans += xn * (2*n - (xn - 1));
    ans -= yn * (2 + (yn - 1));

    cout << ans/2 << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
