#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(){
    int n;
    cin >> n;
    
    int c_2 = 0;
    int c_3 = 0;
    
    while(n % 2 == 0){
        c_2++;
        n /= 2;
    }
    while(n % 3 == 0){
        c_3++;
        n /= 3;
    }
    
    if(n != 1 || (c_2 > c_3)){
        return -1;
    }
    
    return 2*c_3 - c_2;
    
}

signed main() {
	int t;
	cin >> t;
	while(t--){
	    cout << solve() << endl;
	}

}
