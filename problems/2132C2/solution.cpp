#include <bits/stdc++.h>
using namespace std;
#define int long long

int cost_calc(int x){
    return pow(3, x+1) + x*pow(3, x-1);
}

void solve(){
    int n, k;
    cin >> n >> k;

    if(k >= n){
        cout << 3 * n << endl;
        return;
    }

    int p = ceil(log2(n) / log2(3));
    int ans = 0;
    int m = 0;
    map<int, int, greater<int>> deals;
    while(true){
        if(n == 0){
            break;
        }
        int x = pow(3, p);

        if(x > n){
            p--;
        }
        else{
            if(deals.count(x) == 0){
                deals[x] = 1;
            }
            else{
                deals[x]++;
            }
            m++;
            ans += cost_calc(p);
            n -= x;
        }
    }
    if(m > k){
        cout << -1 << endl;
        return;
    }
    if(m == k){
        cout << ans << endl;
        return;
    }

    int diff = floor((k - m) / 2);
    int i = 0;
    for(auto it = deals.begin(); it != deals.end() && diff > 0;){
        // cout << it->first << " " << it->second << endl;
        int remove = min(it->second, diff);
        ans -= remove * (it->first / 3);
        deals[it->first / 3] += remove * 3;
        it->second -= remove;
        diff -= remove;
        if(it->second == 0){
            it++;
        }
        // if(it->second > 0){
        //     ans -= (it->first)/3;
        //     deals[it->first / 3] += 3;
        //     deals[it->first]--;
        //     diff -= 2;
        // }
        // else{
        //     it++;
        // }
        // ans -= deals[i] / 3;
        // i++;
        // diff -= 2;
    }
    // while(diff >= 2){
    //     auto it = deals.begin();
    //     if(it-> second > 0){
    //         ans -= (it->first)/3;
    //         deals[it->first]--;
    //         diff -= 2;
    //     }
    //     else{
    //         it++;
    //     }
        // ans -= deals[i] / 3;
        // i++;
        // diff -= 2;
    // }

    // int x = floor((log2((2*n/3) + 1)) / log2(3));

    cout << ans << endl;
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