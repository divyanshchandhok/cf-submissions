#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int x, cnt = 0;
    bool f = false;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x != 0 && f == false){
            cnt++;
            f = true;
        }
        if(x == 0 && f == true){
            f = false;
        }
    }
    if(cnt == 0){
        cout << 0 << endl;
    }
    else if(cnt == 1){
        cout << 1 << endl;
    }
    else{
        cout << 2 << endl;
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