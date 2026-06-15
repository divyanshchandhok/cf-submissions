#include <bits/stdc++.h>
using namespace std;
#define int long long

struct Casino {
    int l, r, re;
};

void solve(){
    int n, k;
    cin >> n >> k;
    vector<Casino> casinos(n+1);
    for(int i = 0; i < n; i++){
        cin >> casinos[i].l >> casinos[i].r >> casinos[i].re;
    }
    casinos[n] = {10000000000, 10000000000, 10000000000};
    sort(casinos.begin(), casinos.end(), [](const Casino& a, const Casino& b) {
        if(a.l != b.l) return a.l < b.l;
        return a.r < b.r;
    });
    int cmax = k;
    for(int i = 0; i < n; i++){
        // if(casinos[i].r <= k){
        //     continue;
        // }
        // cout << k << ' ' << cmax << endl;
        // cout << casinos[i].l << ' ' << casinos[i].r << ' ' << casinos[i].re << endl;

        if(casinos[i].l <= k && casinos[i].r >= k){
            cmax = max(cmax, casinos[i].re);
        }
        if(casinos[i+1].l > k){
            k = cmax;
        }

    }
    cout << cmax << endl;
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