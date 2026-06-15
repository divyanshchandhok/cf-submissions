#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, val, prev_val, prev_ind = 0, cnt = 1;
    cin >> n;
    vector<int> values;
    for(int i = 0; i < n; i++){
        cin >> val;
        values.push_back(val);
    }
    prev_val = values[0];
    values.push_back(-1);
    vector<int> ans;
    for(int i = 1; i < n+1; i++){
        val = values[i];
        // cout << val << endl;
        if(val == prev_val){
            cnt++;
        }
        else{
            if(cnt == 1){
                cout << -1 << endl;
                return;
            }
            for(int j = prev_ind; j < prev_ind + cnt - 1; j++){
                ans.push_back(j+2);
            }
            ans.push_back(prev_ind+1);
            prev_ind = i;
            prev_val = val;
            cnt = 1;
        }
    }

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << ' ';
    }
    cout << endl; 
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