#include <bits/stdc++.h>
using namespace std;
void solve(int n, int x){
    if(n % 2 == 0)cout << 0 << endl;
    else cout << x << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,x;cin >> x >> n;
        solve(n,x);
    }

    return 0;
}