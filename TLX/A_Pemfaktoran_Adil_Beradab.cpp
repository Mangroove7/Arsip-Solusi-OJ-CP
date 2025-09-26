#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int  main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n; cin >> n;
    int cnt = 0;
    for(int i = 1;i <= n;i++){
        if(n % i == 0){
            cnt++;
            // if(cnt == 5)break;
        }
    }
    // cout << cnt;
    if (cnt == 5)cout << "YES\n";
    else cout << "NO\n";
    return 0;
}