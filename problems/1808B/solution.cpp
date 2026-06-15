#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    
    for(int i = 0; i < m; i++){
        int temp[n];
        for(int j = 0; j < n; j++){
            temp[j] = a[j][i];
        }
        sort(temp, temp+n);
        
        for(int j = 0; j < n; j++){
            // cout << temp[j]  << endl;
            sum += temp[j] * (2*j + 1 - n);
        }
    }
    
    cout << sum << endl;
    
}
signed main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}

}
