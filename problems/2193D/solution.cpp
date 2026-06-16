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
    vector<int> swords;
    vector<int> monsters;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        swords.push_back(x);
    }
    monsters.push_back(0);
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        monsters.push_back(x + monsters[i-1]);
    }
    
    sort(swords.begin(), swords.end());
    int prev_s = swords[0];
    int ans = LLONG_MIN;
    swords.push_back(-1);
    int i = 0, li = n, lsi = 0;
    debug(swords, monsters);
    while(i <= n){
        int cur_s = swords[i];
        if(cur_s == prev_s){
            i++;
            continue;
        }
        debug(cur_s, prev_s, li, i, lsi, n-lsi);
        for(int j = li; j >= 0; j--){
            if(monsters[j] <= (n - lsi)){
                ans = max(ans, prev_s*j);
                li = j;
                i++;
                prev_s = cur_s;
                lsi = i-1;
                break;
            }
        }
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
