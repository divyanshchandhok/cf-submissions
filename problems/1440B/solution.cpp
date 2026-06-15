#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n*k);
    for(int i = 0; i < n*k; i++){
        cin >> arr[i];
    }
    int leave = n / 2, needed = k;
    int ans = 0;
    for(int i = (n*k) - 1; i >= 0; i--){
        if(needed == 0){
            break;
        }
        if(leave != 0){
            leave--;
        }
        else{
            ans += arr[i];
            leave = n / 2;
            needed--;
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