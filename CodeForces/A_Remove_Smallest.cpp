#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n == 1) {
        cout << "YES\n";
        return;
    }

    sort(a.begin(), a.end());

    bool bisa = true;
    for (int i = 0; i < n - 1; i++) {
        if (a[i+1] - a[i] > 1) {
            bisa = false;
            break; // Langsung hentikan loop jika sudah ketemu
        }
    }

    if (bisa) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

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