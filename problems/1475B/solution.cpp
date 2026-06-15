#include <bits/stdc++.h>
using namespace std;
#define int long long

string solve(){
    int n;
    cin >> n;
    if(n == 1){
        return "NO";
    }
    
    int q = n / 2020;
    int r = n % 2020;
    if((n - q*2020) <= q){
        return "YES";
    }
    return "NO";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        cout << solve() << endl;
    }
}