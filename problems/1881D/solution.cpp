#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> primes;

vector<int> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = false;
    if (n >= 1) isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) primes.push_back(i);
    }
    return primes;
}

void process(int num, map<int, int> &factors){

    // for(int i : primes){
    //     if(num == 1) break;
    //     while(num % i == 0){
    //         factors[i]++;
    //         num /= i;
    //     }
    // }
    int i = 2;

    while(i * i <= num){
        if(num % i == 0){
            factors[i]++;
            // cout << num << ' ' << i << endl;
            num /= i;
        }
        else{
            i++;
        }
    }
    if(num > 1){
        factors[num]++;
    }
}
void solve(){
    map<int, int> factors;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        process(t, factors);
    }
    for(auto i : factors){
        if(i.second % n != 0){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

signed main(){
    // primes = sieve(1000000);
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
}