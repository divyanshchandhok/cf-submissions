#include <bits/stdc++.h>
#define int long long


using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int wc = 0;
    for(int i = 0; i < k; i++){
        if (s[i] == 'W'){
            wc++;
        }
    }
    
    int ans = wc;
    
    for(int i = 0; i < n - k; i++){
        char fe = s[i];
        char le = s[i+k];
        
        if(fe != le){
            if(le == 'W'){
                wc++;
            }
            else{
                wc--;
            }
        }
        ans = min(ans, wc);
        
    }
    
    cout << ans << endl;
    
}
signed main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}