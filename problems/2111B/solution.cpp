#include <bits/stdc++.h>
using namespace std;
#define int long long

int fib(int n)
{
    int a = 0;
    int b = 1;
    while (n-- > 1) {
        int t = a;
        a = b;
        b += t;
    }
    return b;
}

void solve(){
    int n, m;
    cin >> n
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}