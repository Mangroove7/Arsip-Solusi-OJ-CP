#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);

    long long N;cin >> N;
    double M = N + 0.0;
    double cnt = 0.0;
    for (int i = 1; i <= N; i++) {
        if(i % 2 == 1) cnt++;
    }
    double y = cnt / N;
    cout << fixed << setprecision(10) << y << endl;
}