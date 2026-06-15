#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    for(int i = 0; i < n; i++){
        int e = pow(10, i+1);
        e += 1;
        int r = n % e;
        int a = n / e;
        if(r == 0){
            // cout << e << " " << a << endl;
            ans.push_back(a);
        }
        else{
            if(a == 0){
                break;
            }
        }

    }
    cout << ans.size() << endl;

    for(int i = ans.size() - 1; i >= 0; i--){
        cout << ans[i] << " ";
    }
    if(ans.size() != 0){
        cout << endl;
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