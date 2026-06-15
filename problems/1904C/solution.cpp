#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k, m = LLONG_MAX, d, x;
    cin >> n >> k;
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> x;
        a[i] = x;
        m = min(m, x);
    }
    sort(a.begin(), a.end());
    if(k >= 3){
        m = 0;
    }
    else if(k == 1){
        for(int i = 0; i < n - 1; i++){
            m = min(m, a[i + 1] - a[i]);
        }
    }
    else{
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                d = abs(a[i] - a[j]);
                m = min(m, d);
                int p = lower_bound(a.begin(), a.end(), d) - a.begin();
                if(p < n){
                    m = min(m, abs(a[p] - d));
                }
                if(p > 0){
                    m = min(m, abs(a[p - 1] - d));
                }
            }
        }
    }
    cout << m << endl;
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