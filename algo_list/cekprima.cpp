#include <bits/stdc++.h>
using namespace std;

bool cekprima(int n){
    if (n < 2)return false;
    for(int i = 2; i * i <= n;i++){
        if (n % i == 0)return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cout << "Program efisien mengecek prima dengan kompleksitas O(akar(N))\n";
    cout << "Masukkan nilai yang ingin dicek : ";
    int n;cin >> n;
    if (cekprima(n) == true){
        cout << n << " merupakan bilangan prima\n";
    }
    else {
        cout << n << " bukan merupakan bilangan prima(bil.komposit)\n";
    }
}