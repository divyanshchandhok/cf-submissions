#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;

    string a;
    cin >> a;

    int m;
    cin >> m;

    string b, c;
    cin >> b >> c;

    string f = "";
    string l = "";

    for(int i = 0; i < m; i++){
        if(c[i] != 'D'){
            f += b[i];
        }
        else{
            l += b[i];
        }
    }
    reverse(f.begin(), f.end());
    cout << f + a + l << endl;
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