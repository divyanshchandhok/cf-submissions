#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif
#define int long long

void solve() {
    string s, t;
    cin >> s >> t;
    int sl = s.length(), tl = t.length();

    map<char, int> mp;
    int le = sl - 1;
    bool flag;
    for(int i = tl-1; i >= 0; i--){
        flag = 0;
        char c = t[i];
        if(mp[c] != 0){
            cout << "NO" << endl;
            return;
        }

        for(int j = le; j >= 0; j--){
            le = j-1;
            if(s[j] == c){
                flag = 1;
                break;
            }
            mp[s[j]]++;
        }
    }

    if(flag == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
