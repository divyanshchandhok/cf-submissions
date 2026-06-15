#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int a[n];
    int cnt = 0, k, cnt2 = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 2){
            cnt++;
        }
    }
    if(cnt % 2 != 0){
        cout << -1 << endl;
    }
    else{
        for(int i = 0; i < n; i++){
            if(a[i] == 2){
                cnt2++;
            }
            if(cnt2 == cnt/2){
                cout << i+1 << endl;
                return;
            }
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
}