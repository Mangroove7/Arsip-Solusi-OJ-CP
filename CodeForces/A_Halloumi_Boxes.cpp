#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;int k;cin >> n >> k;
    vector <int> a;
    
    for (int i = 0; i < n; i++) {
        int x;
        a.push_back(x);
        
    }
    vector <int> dupl_a = a;
    sort(dupl_a.begin(),dupl_a.end());
    if(dupl_a == a || k > 1) cout << "YES\n";
    else cout << "NO\n";
}
//a
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}