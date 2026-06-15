#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif
#define int long long
#define MOD 1000000007
void solve() {
    string s;
    cin >> s;
    vector<int> nums;
    int a = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'b'){
            nums.push_back(a);
            a = 0;
        }
        else if(s[i] == 'a'){
            a++;
        }
    }
    nums.push_back(a);
    debug(nums);
    int ans = 1;
    for(int i = 0; i < nums.size(); i++){
        ans = (ans * (nums[i] + 1)) % MOD;
    }
    cout << ans-1;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    
    // while (t--) 
    solve();
}
