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
    set<int> s;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    int le = LLONG_MIN;
    int cnt = 1;
    int mcnt = 1;
    debug(s);
    for(const auto& e : s){
        debug(e, le, cnt);
        if(le == LLONG_MIN){
            le = e;
            continue;
        }
        if((e - le) == 1){
            cnt++;
            mcnt = max(mcnt, cnt);
        }
        else{
            cnt = 1;
        }
        le = e;
    }
    cout << mcnt << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
