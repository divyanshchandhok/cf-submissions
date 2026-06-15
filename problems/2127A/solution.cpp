#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    set<int> nums;
    for(int i : a){
        if(i == 0){
            cout << "NO" << endl;
            return;
        }
        else if(i != -1){
            nums.insert(i);
        }
    }
    if(nums.size() > 1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
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