#include <bits/stdc++.h>
#define int long long


using namespace std;

int solve(){
    int a, b;
    cin >> a >> b;
    int total = 0;
    int i, ans, la = 1e9;
    
    if(b == 1){
        b++;
        total++;
    }
    
    while(true){
        i = 1;
        while(true){
            ans = a / pow(b, i);
            if(ans == 0){
                if((total + i) <= la){
                    la = total + i;
                    b++;
                    total++;
                    break;
                }
                else{
                    return la;
                }
            }
            else{
                i++;
            }
        }
    }
    
}
signed main()
{
    int t;
    cin >> t;
    while(t--){
        cout << solve() << endl;
    }
}