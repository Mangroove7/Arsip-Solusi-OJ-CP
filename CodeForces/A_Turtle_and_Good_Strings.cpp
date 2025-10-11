#include <bits/stdc++.h>
using namespace std;
bool solve(string a,int n){
    if (n < 2) return false;
    if (a[0] == a[n-1])return false;
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        string a;cin >> a;
        bool cek = solve(a,n);
        (cek)?cout << "YES\n":cout << "NO\n";
    }

    return 0;
}