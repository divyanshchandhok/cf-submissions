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
    vector<int> a;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    int ops = 0, o;
    for(int i = n-2; i >= 0; i--){
        if(a[i+1] == 0){
            cout << -1 << endl;
            return;
        }
        if(a[i] < a[i+1]) continue;
        if(a[i] == a[i+1]){
            o = 1;
        }
        else{
            o = ceil(log2((double) a[i] / a[i+1]));
        }
        ops += o;
        debug(a[i+1], a[i], o);
        a[i] >>= o;
        if(a[i] == a[i+1]){
            ops+=1;
            a[i] >>= 1;
        }
    }
    cout << ops << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
