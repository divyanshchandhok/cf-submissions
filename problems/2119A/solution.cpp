#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if((b-a) > 0){
        if(y >= x){
            cout << (b-a)*x << endl;
        }
        else{
            if(a % 2 == b % 2){
                cout << (b-a)*(x+y)/2 << endl;
            }
            else{
                if(a % 2 == 0){
                    cout << ((b-a-1)/2 + 1)*y + ((b-a-1)/2)*x << endl;
                }
                else{
                    cout << ((b-a-1)/2 + 1)*x + ((b-a-1)/2)*y << endl;
                }

            }
        }
    }
    else if((b-a) == 0){
        cout << 0 << endl;
    }
    else if((b-a) == -1){
        if(a % 2 != 0){
            cout << y << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    else{
        cout << -1 << endl;
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