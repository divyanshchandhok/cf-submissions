#include <bits/stdc++.h>
#include <numeric>
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
    vector<int> nums;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    nums.push_back(0);
    int ones = 0;
    int pp = 0;
    for(int i = 0; i < n; i++){
        if(nums[i] == 1) ones++;
        if(gcd(nums[i], nums[i+1]) == 1){
            pp++;
        }
    }
    debug(nums, ones, pp);
    if(ones > 0){
        cout << n - ones << endl;
    }
    else if(pp > 0){
        cout << n << endl;
    }
    else{
        int g = 0;
        int m = LLONG_MAX;
        for(int i = 0; i < n; i++){
            g = gcd(g, nums[i]);
            if(g == 1){
                int gg = 0;
                for(int j = i; j >= 0; j--){
                    debug(i, j);
                    gg = gcd(gg, nums[j]);
                    if(gg == 1){
                        m = min(m, i-j+1);
                        g = 0;
                        break;
                    }
                }
            }
        }
        if(m == LLONG_MAX){
            cout << -1;
            return;
        }
        cout << (n + m - 2);
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    
    // while (t--) 
    solve();
}
