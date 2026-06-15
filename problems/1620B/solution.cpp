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
    int w, h;
    cin >> w >> h;
    int ar = 0;
    vector<int> a;
    for(int i = 0; i < 4; i++){
        int k;
        cin >> k;
        a.clear();
        for(int i = 0; i < k; i++){
            int x;
            cin >> x;
            a.push_back(x);
        }
        if(i < 2) ar = max(ar, h*(a[k-1] - a[0]));
        else ar = max(ar, w*(a[k-1] - a[0]));
    }

    cout << ar << endl;

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
