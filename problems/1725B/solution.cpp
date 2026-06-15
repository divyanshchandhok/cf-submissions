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
    int n, d;
    cin >> n >> d;
    vector<int> a;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());
    int lp = 0, rp = n-1;
    int ans = 0;
    while(true){
        if(rp < 0){
            break;
        }
        int e = a[rp];
        if(e > d){
            ans++;
            rp--;
            continue;
        }
        else{
            int needed = ceil((double) (d+1) / e);
            if(rp-lp+1 >= needed){
                lp += needed - 1;
                rp--;
                ans++;
            }
            else{
                break;
            }
        }
    }
    cout << ans;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    
    // while (t--) 
    solve();
}
