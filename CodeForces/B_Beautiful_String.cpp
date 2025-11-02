#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
    int n;cin >> n;
    string b;cin >> b;
    cout << n << '\n';

    for (int i = 1; i <= n; i++) {
        if (i == n) {
            cout << i << endl;
            break;
        }
        cout << i << " ";
        
    }

    }

    return 0;
}