#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, s, val;
    cin >> n >> s;
    vector<int> vals;
    for(int i = 0; i < n; i++){
        cin >> val;
        vals.push_back(val);
    }
    int mival = *min_element(vals.begin(), vals.end());
    int maval = *max_element(vals.begin(), vals.end());

    if(mival >= s){
        cout << maval - s << endl;
    }
    else if(maval <= s){
        cout << s - mival << endl;
    }
    else{
        maval = maval - s;
        mival = s - mival;
        cout << 2*min(mival, maval) + max(mival, maval) << endl;

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