//dari 0 kembali ke 0 dengan kalkulasi volume minimum di tanki gas mobil
//artinya gas yang diperlukan 2 * x
#include <bits/stdc++.h>
#define vi vector<int>
#define vl vector<long long>
using namespace std;

void solve() {
    int n,x;cin >> n >> x;
    vi a;
    int g = 0;
    for (int i = 0; i < n; i++) {
        int y;cin >> y;
        a.push_back(y);
        
    }
    for (int i = 0; i < n - 1; i++) {
        g = max(g,(a[i + 1] - a[i]));
    }
    int tail = 2 * (x - a[n-1]);
    //untuk hasil yang minimum bisa saja kita refill gas di semua titik stasiun gas!!
    int hasil = max(g,tail);
    cout << hasil << endl;
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