#include <bits/stdc++.h>
using namespace std;

void solve(int a , int b){
    string biner_a = bitset<8> bin(a);
    string biner_b = bitset<8> bin(b);
    if (a == b) cout << 0;
    int cnt = 0;
    while (cnt < 100){

        for (int i = 0; i < 8; i++) {
            if (biner_a[i])
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a,b;cin >> a >> b;
        solve(a,b);
    }

    return 0;
}