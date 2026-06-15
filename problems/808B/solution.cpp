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
    int n, k;
    cin >> n >> k;
    int s = 0;
    vector<int> sleep;
    sleep.push_back(0);
    int q = 0, r = 0;
    for(int i = 1; i < n+1; i++){
        int x;
        cin >> x;
        sleep.push_back(x + sleep[i-1]);
    }
    debug(sleep, s);
    for(int i = 0; i < (n-k+1); i++){
        q += (sleep[i+k] - sleep[i])/(n-k+1);
        r += (sleep[i+k] - sleep[i]) % (n-k+1);
        q += r / (n-k+1);
        r %= (n-k+1);
    }
    // debug(s);
    long double ans, rld = r, ald = (n-k+1), qld = q;
    ans += q;
    ans += rld / ald;
    cout << fixed;
    cout << setprecision(10);
    cout << ans << endl;
    
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    
    // while (t--) 
    solve();
}
