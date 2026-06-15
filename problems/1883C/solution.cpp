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
    vector<int> a;

    map<int, int> r;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        r[k - (x % k)]++;
        a.push_back(x);
    }

    if(r[k] != 0){
        cout << 0 << endl;
        return;
    }

    if(k == 4){
        if(r[2] >= 2){
            cout << 0 << endl;
            return;
        }
        if(r[2] == 1){
            if(r[1] > 0){
                cout << 1 << endl;
                return;
            }
        }

    }

    for(auto& p : r){
        cout << p.first << endl;
        return;
    }

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
