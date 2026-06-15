#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int c = 0;
    bitset<64> binary(n);
    for(int i = 0; i < 64; i++){
        if(binary[i] == 1){
            c++;
        }
    }
    if(c == 1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}