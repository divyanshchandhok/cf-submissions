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
    int n, k, q;
    cin >> n >> k >> q;
    int ans = 0, cl = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        if(x <= q){
            cl++;
        }
        else{
            if(cl >= k){
                // (cl - k)
                ans += (cl - k + 2) * (cl - k + 1) / 2;
            }
            cl = 0;
        }
    }
    if(cl >= k){
        // (cl - k)
        ans += (cl - k + 2) * (cl - k + 1) / 2;
    }

    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
