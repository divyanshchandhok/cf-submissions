#include <bits/stdc++.h>
using namespace std;
#define int long long

// int calc_sum(int a, int d, int n){
//     return n * (2 * a + (n - 1) * d) / 2;
// }
void solve(){
    int x, n;
    cin >> n >> x;
    int ans = 0;
    int m = x % 4;
    if(m == 0){
        ans = 0;
    }
    else if(m == 1){
        ans = x;
    }
    else if(m == 2){
        ans = -1;
    }
    else if(m == 3){
        ans = -x - 1;
    }
    

    // if(n % 4 == 0){
    //     ans += calc_sum(0, 4, (n+4) / 4);
    //     ans += calc_sum(1, 4, n / 4);
    //     ans += calc_sum(-2, -4, n / 4);
    //     ans += calc_sum(-3, -4, n / 4);
    // }
    // else if(n % 4 == 1){
    //     ans += calc_sum(0, 4, (n+4) / 4);
    //     ans += calc_sum(1, 4, (n+4) / 4);
    //     ans += calc_sum(-2, -4, n / 4);
    //     ans += calc_sum(-3, -4, n / 4);
    // }
    // else if(n % 4 == 2){
    //     ans += calc_sum(0, 4, (n+4) / 4);
    //     ans += calc_sum(1, 4, (n+4) / 4);
    //     ans += calc_sum(-2, -4, (n+4) / 4);
    //     ans += calc_sum(-3, -4, n / 4);
    // }
    // else if(n % 4 == 3){
    //     ans += calc_sum(0, 4, (n+4) / 4);
    //     ans += calc_sum(1, 4, (n+4) / 4);
    //     ans += calc_sum(-2, -4, (n+4) / 4);
    //     ans += calc_sum(-3, -4, (n+4) / 4);
    // }

    if(n % 2 != 0){
        n += ans;
    }
    else{
        n -= ans;
    }
    cout << n << endl;
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