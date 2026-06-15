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
    unordered_map<int, pair<int, int>> mp;
    int le = -1, cl = 1;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x == le){
            cl++;
            mp[x].first = max(mp[x].first, cl);
        }
        else{
            cl = 1;
            mp[x].first = max(mp[x].first, cl);
        }
        debug(x, le, cl, mp);
        le = x;
    }
    le = -1, cl = 1;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        debug(x, le, cl, mp);

        if(x == le){
            cl++;
            mp[x].second = max(mp[x].second, cl);
        }
        else{
            cl = 1;
            mp[x].second = max(mp[x].second, cl);
        }
        le = x;
    }
    int ml = -1;

    for(auto& p : mp){
        ml = max(ml, p.second.first+p.second.second);
    }

    cout << ml << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
