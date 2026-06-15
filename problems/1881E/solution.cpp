#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> arr;
int n;
// vector<int> dp;
// map<pair<int, int>, int> dp;
unordered_map<int, int> dp;
// int rec(int i, int left){
//     int ans;
//     if(dp.count(make_pair(i, left))){
//         return dp[make_pair(i, left)];
//     }
//     // cout << i << " " << left << endl;
//     if(left == 0){
//         if(i == n){
//             return 0;
//         }
//         ans = min(1 + rec(i + 1, 0), rec(i + 1, arr[i]));
//     }
//     else{
//         if(i == n) return 1000000;
//         ans = min(1 + rec(i + 1, left), rec(i + 1, left - 1));
//     }
//     return dp[make_pair(i, left)] = ans;
// }

int rec(int i){
    if(i == n) return 0;
    if(dp.count(i)){
        return dp[i];
    }
    int ans = 0;

    if(arr[i] + i < n){
        ans = max(ans, arr[i] + 1 + rec(i + 1 + arr[i]));
    }
    
    ans = max(ans, rec(i + 1));

    return dp[i] = ans;

}

void solve(){
    cin >> n;
    arr.resize(n);
    // dp.resize(n);
    // dp.clear();
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << n - rec(0) << endl;
    // cout << rec(0, 0) << endl;
    arr.clear();
    dp.clear();
    // dp.clear();
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