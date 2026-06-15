#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif
#define int long long

int ceil_div(int a, int b){
    return (a + b - 1) / b;
}

bool is_int(float a){
    return floor(a) == a;
}

bool check(int k, vector<int>& diffs, int h){
    for(int i = 0; i < diffs.size(); i++){
        h -= min(k, diffs[i]);
    }
    h -= k;

    if(h <= 0) return true;
    return false;
}

void solve() {
    int n, h;
    cin >> n >> h;

    vector<int> a;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        a.push_back(x);
    }

    vector<int> diffs;

    for(int i = 1; i < n; i++){
        diffs.push_back(a[i] - a[i-1]);
    }

    int lo = 1;
    int hi = h;
    int ans;
    while(lo <= hi){
        int mid = lo + (hi - lo)/2;

        if(check(mid, diffs, h)){
            ans = mid;
            hi = mid - 1;
        }
        else{
            lo = mid + 1;
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
