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

bool check(int m, int k, int n){
    int pipes = m*(2*k - m + 1)/2 - m + 1;
    if(pipes >= n){
        return true;
    }
    return false;
}

void solve() {
    int n, k;
    cin >> n >> k;

    int lo = 0;
    int hi = k-1;
    int ans = -1;
    while(lo <= hi){
        int mid = lo + (hi - lo)/2;

        if(check(mid, k, n)){
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

    // int t;
    // cin >> t;
    
    // while (t--) 
    solve();
}
