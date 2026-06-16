#include <iostream>
#define int long long

using namespace std;

void solve() {
    int n, s, x, sum = 0;
    cin >> n >> s >> x;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        sum += a;
    }

    if(sum > s){
        cout << "NO" << endl;
    }
    else{
        if((sum - s) % x == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
