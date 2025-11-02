#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N,X;cin >> N >> X;
    int L[N];
    int D[N];
    int cnt = 0;
    D[0] = 0;
    L[0] = 0;
    for (int i = 1; i <= N; i++) {
        cin >> L[i];
        D[i] += D[i-1] + L[i];
        if(D[i] <= X) cnt = i + 1;
        
    }
    if (N == 1)cnt = 0;
    cout << cnt;
    return 0;
}