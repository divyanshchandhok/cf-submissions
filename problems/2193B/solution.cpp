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
    int n, target, l;
    cin >> n;
    l = n;
    vector<int> nums;
    map<int, int> ind;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
        ind[x] = i;

    }
    for(int i = 0; i < n; i++){
        int e = nums[i];
        if(e+i != n){
            target = n-i;
            l = i;
            break;
        }
        cout << e << " ";
    }
    debug(target, l);
    if(l != n){
    for(int i = ind[target]; i >= l; i--){
        cout << nums[i] << " ";
    }
    for(int i = ind[target] + 1; i < n; i++){
        cout << nums[i] << " ";
    }
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
