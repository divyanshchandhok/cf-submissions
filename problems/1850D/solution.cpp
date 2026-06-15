#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int c = 1;
    int cm = 1;
    for(int i = 1; i < n; i++){
        if(a[i] - a[i-1] <= k){
            c++;
        }
        else{
            cm = max(cm, c);
            c = 1;
        }
    }
    cm = max(cm, c);
    cout << n - cm << endl;
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}