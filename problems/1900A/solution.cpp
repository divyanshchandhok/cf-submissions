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
    int ans = 0, cnt = 0, mcnt = 0;
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;

        if(c == '.'){
            cnt++;
        }
        else{
            ans += cnt;
            mcnt = max(mcnt, cnt);
            cnt = 0;
        }

    }  
    ans += min(2ll, cnt);
    mcnt = max(mcnt, cnt);

    if(mcnt > 2) cout << 2 << endl;
    else cout << ans << endl;

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
