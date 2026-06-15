#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<pair<int, int>> levels;

bool check(int k){
    int cl = -k, cr = k, il, ir;
    for(const auto& p : levels){
        il = max(p.first, cl);
        ir = min(p.second, cr);
        // cout << k << ' ' << cl << ' ' << cr << ' ' << p.first << ' ' << p.second << ' ' << il << ' ' << ir <<endl;
        if(il > ir){
            // cout << k << ' ' << cl << ' ' << cr << endl;
            return false;
        }
        cl = il - k;
        cr = ir + k;
    }

    if(il > ir){
        // cout << k << ' ' << p.first << ' ' << p.second << endl;
        return false;
    }
    // cout << k << " true" << endl;

    return true;
}

void solve(){
    levels.clear();
    int n, l, r;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> l >> r;
        levels.push_back(make_pair(l, r));
    }
    int le = 0, re = 1000000010, mid, ans;
    while(le <= re){
        mid = (le + re) / 2;
        if(check(mid)){
            re = mid - 1;
            ans = mid;
        }
        else{
            le = mid + 1;
        }
    }

    cout << ans << endl;
}

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
}