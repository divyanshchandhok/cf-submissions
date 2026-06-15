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

    int x;
    cin >> x;
    int le = x;
    int l = 1, ans = 0;
    for(int i = 0; i < n-1; i++){
        cin >> x;
        debug(x, le, l);
        if(x + le == 7 || x == le){
            l++;
        }
        else{
            ans += l/2;
            l = 1;
        }
        le = x;
    }

    cout << ans + l/2 << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
