#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a;
    vector<int> b;

    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        a.push_back(min(x % k, k - (x % k)));
    }
    for(int i = 0; i < n; i++){
        cin >> x;
        b.push_back(min(x % k, k - (x % k)));
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(a == b){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
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