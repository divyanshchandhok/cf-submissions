#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int x, p = 0;
    vector<int> a, b;
    b.push_back(1000000);
    a.push_back(1000000);
    for(int i = 0; i < n; i++){
        cin >> x;
        int al = a[a.size()-1];
        int bl = b[b.size()-1];
        if(al <= bl){
            // if(x <= al || x >= bl){
            //     b.push_back(x);
            // }
            if(x <= al){
                a.push_back(x);
            }
            else if(x > bl){
                a.push_back(x);
                p += 1;
            }
            else{
                b.push_back(x);
            }
        }
        else{
            if(x <= bl){
                b.push_back(x);
            }
            else if(x > al){
                b.push_back(x);
                p += 1;
            }
            else{
                a.push_back(x);
            }
        }
        // cout << x << ' ';
        // if(x <= a[a.size() - 1]){
        //     a.push_back(x);
        // }
        // else{
        //     if(x > b[b.size() - 1]){
        //         a.push_back(x);
        //         // cout << "here ";
        //         p += 1;
        //     }
        //     else{
        //         b.push_back(x);
        //     }
        // }
    }
    cout << p << endl;
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