#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m, val, ans = 0, cnt = 0;
    cin >> n >> m;
    vector<int> a;
    vector<int> b;
    for(int i = 0; i < m; i++){
        cin >> val;
        a.push_back(val);
    }
    sort(a.begin(), a.end());
    for(int i = 1; i < m; i++){
        b.push_back(a[i] - a[i-1] - 1);
    }
    b.push_back(n - a[m-1] + a[0] - 1);
    sort(b.begin(), b.end(), greater<int>());

    // for(int i = 0; i < b.size(); i++){
    //     cout << b[i] << ' ';
    // }
    for(int i = 0; i < b.size(); i++){
        int v = b[i] - 2*cnt;
        if(v >= 3){
            ans += v - 1;
            cnt += 2;
        }
        else if(v >= 1){
            ans += 1;
            cnt += 1;
        }
        else{
            break;
        }
    }
 
    cout << n - ans << endl;

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