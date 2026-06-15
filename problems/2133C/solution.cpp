#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int x;
    string s = "";
    map<int, vector<int>, greater<int>> m;
    for(int i = 1; i <= n; i++){
        s += " " + to_string(i);
    }
    for(int i = 1; i <= n; i++){
        cout << "? " << i << " " << n << s << endl << flush;
        cin >> x;
        m[x].push_back(i);
    }

    vector<int> ans;
    auto it = m.begin();
    int prev = it->second[0];
    ans.push_back(prev);
    it++;
    for(; it != m.end(); it++){
        for(int i : it->second){
            cout << "? " << prev << " " << 2 << " " << prev << " " << i << endl << flush;
            cin >> x;
            if(x == 2){
                ans.push_back(i);
                prev = i;
                break;
            }
        }
    }
    cout << "! " << ans.size();
    for(int i : ans){
        cout << " " << i;
    }
    cout << endl << flush;
    // for(auto it = m.begin(); it != m.end(); it++){
    //     cout << it->first << " ";
    //     for(int i : it->second){
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }
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