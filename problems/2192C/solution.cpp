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

void solve() {
    int n, h, k;
    cin >> n >> h >> k;

    vector<int> nums;
    vector<int> sufs = {0};
    // int maxl = INT_MIN, minl = INT_MAX;
    // int maxi, mini;
    int s = 0;
    int ans  = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        s += x;
        nums.push_back(x);

        // if(x > maxl){
        //     maxi = i;
        //     maxl = max(maxl, x);
        // }
        // if(x < minl){
        //     mini = i;
        //     minl = min(minl, x);
        // }
    }

    if(h % s == 0){
        cout << ((n + k) * (h / s)) - k << endl;
        return;
    }

    ans += (n + k) * (h / s);
    debug(h, s, ans);

    h %= s;

    vector<int> mte(n);

    int cm = INT_MIN;
    for(int i = n-1; i >= 0; i--){
        int e = nums[i];
        cm = max(cm, e);
        mte[i] = cm;
    }
    mte.push_back(0);
    vector<int> mp;

    int cs = 0;
    int cmin = INT_MAX;
    int ms;
    for(int i = 0; i < n; i++){
        int e = nums[i];
        cs += e;
        cmin = min(cmin, e);
        if(cmin < mte[i+1]){
            mp.push_back(cs - cmin + mte[i+1]);
        }
        else{
            mp.push_back(cs);
        }

    }

    ans += (lower_bound(mp.begin(), mp.end(), h) - mp.begin()) + 1;

    cout << ans << endl;
    debug(mte, mp);
    
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
