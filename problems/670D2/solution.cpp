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

bool check(int mid, int k, vector<int>& recipe, vector<int>& initial){
    int needed = k;

    for(int i = 0; i < recipe.size(); i++){
        needed += min(0ll, initial[i] - mid*recipe[i]);
        if(needed < 0) return false;
    }

    if(needed >= 0){
        return true;
    }
    return false;
}
void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> recipe;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        recipe.push_back(x);
    }

    vector<int> initial;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        initial.push_back(x);
    }

    int lo = 0;
    int hi = 2e9;
    // int hi = k + accumulate(initial.begin(), initial.end(), 0);
    int ans = 0;

    while(lo <= hi){
        int mid = lo + (hi - lo)/2;

        if(check(mid, k, recipe, initial)){
            ans = mid;
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
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
