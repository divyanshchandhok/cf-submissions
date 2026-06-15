#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k, x, ki;
    cin >> n >> k;
    set<int> uniques;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> x;
        if(i == k - 1){
            ki = x;
        }
        a[i] = x;
    }
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    if(a.size() == 1) {cout << "YES" << endl; return;}
    if(a[a.size() - 1] == ki) {cout << "YES" << endl; return;}
    for(int i = 0; i < a.size(); i++){
        if(a[i] > ki){
            if((a[i] - a[i - 1]) > ki){
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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