#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif
#define int long long


void solve(){
    int n;
    cin >> n;
    
    map<int, int> mp;
    vector<string> a;
    pair<int, int> p;
    for(auto i : a){
        sum += i;
    }
    for(int i : a){
        sum += i;
    }

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        mp[x]++;
        debug(x, mp);
    }
    
    if(mp.size() == 1) cout << "Yes" << endl;
    else if(mp.size() == 2){
        vector<int> a;
        for(auto& p : mp){
            a.push_back(p.second);
        }
        sort(a.begin(), a.end());
        if((a[1] - a[0]) <= 1){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    else{
        cout << "No" << endl;
    }

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
