#include <bits/stdc++.h>

using namespace std;
#define int long long

int m, n;
unordered_map<int, int> tasks;

bool check(int mid){
    int total = 0;
    for(int i = 1; i <= n; i++){
        int sec = tasks[i];
        // cout << mid << " " << pair.first << " " << pair.second << endl;
        if(sec > mid){
            total += mid;
        }
        else{
            total += sec + ((mid - sec) / 2);
        }
    }
    
    if(total >= m){
        return true;
    }
    return false;
}

void solve() {
    cin >> n >> m;
    
    tasks.clear();
    
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        tasks[x] += 1;
    }

    if(n >= m){
        for(const auto& pair : tasks){
            if(pair.second > 1){
                cout << 2 << endl;
                return;
            }
        }
        cout << 1 << endl;
        return;
    }
    int left = 1;
    int right = m;
    int ans;
    while(left <= right){
        int mid = (left + right) / 2;
        if(check(mid)){
            right = mid - 1;
            ans = mid;
        }
        else{
            left = mid + 1;
        }
    }
    
    cout << ans << endl;
    
    
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
