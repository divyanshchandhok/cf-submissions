#include <bits/stdc++.h>
using namespace std;
#define int long long


int MOD = 998244353;

int fact(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res = (res * i) % MOD;
    }
    return res;
}

void solve(){
    string s;
    cin >> s;

    bool one = true;
    int seq = 1;
    int nums = 1;
    int ops = 0;
    int switches = 1;
    for(char c : s){
        if(one){
            if(c == '1'){
                one = false;
                seq = (seq * nums) % MOD;
                ops += nums-1;
                // if(nums > 1){
                //     switches++;
                // }
                nums = 1;
            }
            else{
                nums++;
            }
        }
        else{
            if(c == '0'){
                one = true;
                seq = (seq * nums) % MOD;
                ops += nums-1;
                // if(nums > 1){
                //     switches++;
                // }
                nums = 1;
            }
            else{
                nums++;
            }
        }
    }

    ops += nums-1;
    seq = (seq * nums) % MOD;
    seq = (seq * fact(ops)) % MOD;
    // seq = (seq * (switches)) % MOD;
    
    switches = 1;
    one = false;
    int seq2 = 1;
    nums = 1;
    int ops2 = 0;
    for(char c : s){
        if(one){
            if(c == '1'){
                one = false;
                seq2 = (seq2 * nums) % MOD;
                ops2 += nums-1;
                // if(nums > 1){
                //     switches++;
                // }
                nums = 1;
            }
            else{
                nums++;
            }
        }
        else{
            if(c == '0'){
                one = true;
                seq2 = (seq2 * nums) % MOD;
                ops2 += nums-1;
                // if(nums > 1){
                //     switches++;
                // }
                nums = 1;
            }
            else{
                nums++;
            }
        }
    }
    ops2 += nums-1;
    seq2 = (seq2 * nums) % MOD;
    // seq2 = (seq2 * switches) % MOD;
    seq2 = (seq2 * fact(ops2)) % MOD;

    if(ops == ops2){
        cout << ops << ' ' << seq + seq2 << endl;
        return;
    }
    if(min(ops, ops2) == ops){
        cout << ops << ' ' << seq << endl;
    }
    else{
        cout << ops2 << ' ' << seq2 << endl;
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