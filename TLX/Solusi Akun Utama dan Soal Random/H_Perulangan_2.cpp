#include <bits/stdc++.h>
using namespace std;
int digit(int i){
    if (i == 0) return 0;
    else return 1 + digit(i / 10);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if(digit(i) % 2 == 1)cnt++;
    }
    cout << cnt << endl;
    // cout << cnt << endl;
    return 0;
}