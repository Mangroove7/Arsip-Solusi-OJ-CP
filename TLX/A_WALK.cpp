#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin >> n;
    ll faktor;
    for(ll i = 1;i * i <= n;i++){
        if(n % i == 0) faktor = i;
    }
    ll faktordua = n / faktor;
    ll solusi = faktordua - 1 + faktor - 1;
    cout << solusi << endl;
    return 0;
}