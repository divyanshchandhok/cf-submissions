#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, s, ss = 0, k, z = 0, o = 0, t = 0;
    cin >> n >> s;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> k;
        a[i] = k;
        ss += k;
        if(k == 0){
            z += 1;
        }
        else if(k == 1){
            o += 1;
        }
        else{
            t += 1;
        }
    }
    if(ss > s){
        for(int i = 0; i < n; i++){
            cout << a[i] << ' ';
        }
        cout << endl;
    }
    else if(ss == s){
        cout << -1 << endl;
    }
    else{
        int l = s - ss;
        if(l == 1){
            for(int i = 0; i < z; i++){
                cout << 0 << ' ';
            }
            for(int i = 0; i < t; i++){
                cout << 2 << ' ';
            }
            for(int i = 0; i < o; i++){
                cout << 1 << ' ';
            }
            cout << endl;

            // if(n % 2 == 0){
            //     if(t >= z + o){
            //         for(int i = 0; i < n/2; i++){
            //             cout << 2 << ' ';
            //             if(z){
            //                 cout << 0 << ' ';
            //                 z--;
            //             }
            //             else if(o){
            //                 cout << 1 << ' ';
            //                 o--;
            //             }
            //             else{
            //                 cout << 2 << ' ';
            //             }
            //         }
            //         cout << endl;
            //     }
            //     else{
            //         cout << -1 << endl;
            //     }
            // }
            // else{
            //     if(t >= z + o - 1){
            //         for(int i = 0; i < n/2; i++){
            //             if(z){
            //                 cout << 0 << ' ';
            //                 z--;
            //             }
            //             else if(o){
            //                 cout << 1 << ' ';
            //                 t--;
            //             }
            //             else{
            //                 cout << 2 << ' ';
            //             }
            //             cout << 2 << ' ';
            //         }
            //         if(z){
            //             cout << 0 << ' ';
            //         }
            //         else if(o){
            //             cout << 1 << ' ';
            //         }
            //         else{
            //             cout << 2 << ' ';
            //         }
            //         cout << endl;
            //     }
            //     else{
            //         cout << -1 << endl;
            //     }
  
            // }
        }
        else{
            cout << -1 << endl;
        }
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