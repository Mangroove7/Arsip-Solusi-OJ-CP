#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll a,b,c,d; cin >> a >> b >> c >> d;
    ll bandsatu = a * d;
    ll banddua = b * c;
     if(bandsatu > banddua){
        cout << "lebih besar\n";
     }
     else if(bandsatu < banddua){
        cout << "lebih kecil\n";
     }
     else if(bandsatu == banddua){
        cout << "sama\n";
     }

    return 0;
}