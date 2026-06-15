#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(){
    int n;
    cin >> n;
    int mod = 1000000007;
    int s = n % mod;
    s *= (n+1) % mod;
    s %= mod;
    s *= (4*n - 1) % mod;
    s %= mod;
    return (337*s) % mod;
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        cout << solve() << endl;
    }
    return 0;
}
