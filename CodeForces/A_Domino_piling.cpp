#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //kita dapat menggunakan solusi dimana tinggal bagi aja luas kotaknya dengan luas domino dan dibulatkan kebawah
    int n,m;cin >> n >> m;
    int luas_kotak = n * m;
    const int luas_domino = 2;
    int hasil = luas_kotak / luas_domino;
    cout << hasil << endl;

    return 0;
}