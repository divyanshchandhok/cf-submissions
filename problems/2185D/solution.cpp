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
    int n, m, h;
    cin >> n >> m >> h;

    vector<int> a;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    map<int, int> add;

    for(int i = 0; i < m; i++){
        int b, c;
        cin >> b >> c;
        b--;
        add[b] += c;
        debug(b, c, h);
        debug(add);
        if(a[b] + add[b] > h){
            add.clear();
        }
    }
    for(int i = 0; i < n; i++){
        cout << a[i] + add[i] << " ";
    }

    cout << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
