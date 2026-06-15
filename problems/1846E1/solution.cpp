#include <bits/stdc++.h>
using namespace std;
#define int long long

int arr[1000010];

void solve(){
    int n;
    cin >> n;
    if(arr[n]){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

}

signed main(){
    // memset(arr, 0, sizeof(arr));
	for(int k = 2; k < 1000; k++){
	    int s = 1 + k + pow(k, 2);
	    arr[s] = 1;
	    int i = 3;
	    while(true){
	        s += pow(k, i);
	        if(s <= 1000000){
	            i += 1;
	            arr[s] = 1;
	        }
	        else{
	            break;
	        }
	    }
	}

    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
